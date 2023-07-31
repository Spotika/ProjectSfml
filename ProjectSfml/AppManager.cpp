#include "AppManager.h"


void AppManager::startApp(std::string name) {
	AbstractApp* new_app = AppFactory::getInstance()->createByName(name);
	new_app->start();
}

void AppManager::addAppToQueue(std::string name) {
	AbstractApp* new_app = AppFactory::getInstance()->createByName(name);
	app_queue.push(new_app);
}

void AppManager::startLoop() {

	while (!app_queue.empty()) {
		AbstractApp* cur_app = app_queue.back();
		app_queue.pop();
		cur_app->start();
	}
}