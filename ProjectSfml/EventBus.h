#pragma once
#include "SFML/Window.hpp"
#include "Singleton.h"
#include <vector>


class EventBus : public Singleton<EventBus> {
private:
	/// <summary>
	/// Коллекция событий
	/// </summary>
	std::vector<sf::Event*>* events = {};
public:
	/// <summary>
	/// Обновление коллекции событий
	/// </summary>
	void update();

	/// <summary>
	/// <summary>
	/// 
	/// </summary>
	/// <returns>Возвращает колекцию событий</returns>
	std::vector<sf::Event*>* getEvents();
};

