#pragma once
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "Singleton.h"


class Visual : public Singleton<Visual> {
private:
	/// <summary>
	/// ������� ������ ����
	/// </summary>
	sf::Window* window = nullptr;
public:
	/// <summary>
	/// 
	/// </summary>
	/// <returns>��������� �� ������ sf::Window</returns>
	sf::Window* getWindow();

	/// <summary>
	/// ������������� ����� �������
	/// </summary>
	void init();
};

