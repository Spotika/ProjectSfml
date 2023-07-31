#pragma once
#include"AbstractApp.h"
#include"Singleton.h"
#include<map>
#include<vector>


class AppFactory : public Singleton<AppFactory>{
private:
	/// <summary>
	/// Словарь с элементами (ключ : значение),
	/// где ключ - имя приложения, а значение - указатель на функцию, создающую объект приложения
	/// </summary>
	std::map<std::string, AbstractApp* (*)()> create_function_by_name;
public:
	/// <summary>
	/// Создает объект приложения по имени
	/// </summary>
	/// <param name="name">Имя приложения</param>
	/// <returns>Ссылку на созданный объект</returns>
	AbstractApp* createByName(std::string name);
	/// <summary>
	/// Добавляет указатель на создающую функцию
	/// </summary>
	/// <param name="name">Имя приложения</param>
	/// <param name="function">указатель на функцию, которая создает объекты приложения</param>
	void addCreatingFunction(std::string name, AbstractApp* (*function)());
};
