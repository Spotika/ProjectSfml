#pragma once
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "Singleton.h"


class Visual : public Singleton<Visual> {
private:
	/// <summary>
	/// главный объект окна
	/// </summary>
	sf::Window* window = nullptr;
public:
	/// <summary>
	/// 
	/// </summary>
	/// <returns>Указатель на объект sf::Window</returns>
	sf::Window* getWindow();

	/// <summary>
	/// Инициализация видео системы
	/// </summary>
	void init();
};

