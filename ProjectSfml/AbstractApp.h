#pragma once
#include<string>


/// <summary>
/// абстракция приложений
/// </summary>
class AbstractApp {
private:
public:
	static inline std::string name;
	/// <summary>
	/// старт приложения
	/// </summary>
	virtual void start() {};
	/// <summary>
	/// основной цикл приложения
	/// </summary>
	virtual void loop() {};
	/// <summary>
	/// окончание работы приложения
	/// </summary>
	virtual void stop() {};
};

