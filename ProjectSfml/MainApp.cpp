#include "MainApp.h"
#include<iostream>


void MainApp::start() {
	std::cout << "Main App started" << std::endl;
	loop();
}

void MainApp::loop() {
	std::cout << "Main App loop" << std::endl;
	stop();
}

void MainApp::stop() {
	std::cout << "Main App ended" << std::endl;

}