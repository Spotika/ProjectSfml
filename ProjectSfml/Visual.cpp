#include "Visual.h"
#include "Config.h"

sf::Window* Visual::getWindow() {
	return window;
}

void Visual::init() {
	window = new sf::Window(sf::VideoMode(config::window::WIDTH, config::window::HEIGHT), config::window::TITLE);
}