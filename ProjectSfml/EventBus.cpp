#include "EventBus.h"
#include "Visual.h"

void EventBus::update() {
	sf::Event event;
	
	sf::Window* window = Visual::getInstance()->getWindow();
	events->clear();

;	while (window->pollEvent(event)) {
		events->push_back(&event);
	}
} 

std::vector<sf::Event*>* EventBus::getEvents() {
	return events;
}