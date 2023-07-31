#pragma once
#include "SFML/Window.hpp"
#include "Singleton.h"
#include <vector>


class EventBus : public Singleton<EventBus> {
private:
	/// <summary>
	/// ��������� �������
	/// </summary>
	std::vector<sf::Event*>* events = {};
public:
	/// <summary>
	/// ���������� ��������� �������
	/// </summary>
	void update();

	/// <summary>
	/// <summary>
	/// 
	/// </summary>
	/// <returns>���������� �������� �������</returns>
	std::vector<sf::Event*>* getEvents();
};

