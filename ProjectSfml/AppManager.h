#pragma once
#include"AppFactory.h"
#include"Singleton.h"
#include<queue>

class AppManager : public Singleton<AppManager> {
private:
	/// <summary>
	/// Очередь приложений запуска
	/// </summary>
	std::queue<AbstractApp*> app_queue;
public:
	/// <summary>
	/// Запускает приложение на месте, не дожидаясь окончания предыдущего
	/// </summary>
	/// <param name="name">Имя приложения</param>
	void startApp(std::string name);
	/// <summary>
	/// Добавляет приложение в очередь для запуска
	/// </summary>
	/// <param name="name">Имя приложения</param>
	void addAppToQueue(std::string name);
	/// <summary>
	/// Запускает основной цикл программы, завершается, когда завершены все приложения
	/// </summary>
	void startLoop();
};

