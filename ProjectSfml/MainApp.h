#pragma once
#include "AbstractApp.h"


/// <summary>
/// Первое, основное приложение
/// </summary>
class MainApp : public AbstractApp {
public:
	void start();
	void loop();
	void stop();
};

