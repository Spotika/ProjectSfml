#include<iostream>
#include "MainApp.h"
#include "AppFactory.h"
#include "AbstractApp.h"
#include "AppManager.h"
#include "MonoFactory.h"

AbstractApp* (*getCreateFunction())() {
	AbstractApp* (*createFunction)() = []() {
		return (AbstractApp*)(new MainApp());
	};
	return createFunction;
}

class Main {
public:
	/// <summary>
	/// Прикрепляет приложения к фабрике
	/// </summary>
	void linkApps() {
		AppFactory* factory = AppFactory::getInstance();
		factory->addCreatingFunction("MainApp", MonoFunctionFactory<AbstractApp, MainApp> ().getCreateFunction());
	}

	/// <summary>
	/// Старт программы
	/// </summary>
	void start() {
		linkApps();
		AppManager* app_manager = AppManager::getInstance();
		app_manager->startApp("MainApp");

		app_manager->startLoop();
	}
};


int main() {
	Main main_object;
	main_object.start();
}
