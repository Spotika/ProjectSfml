#include "AppFactory.h"

void AppFactory::addCreatingFunction(std::string name, AbstractApp* (*function)()) {
	create_function_by_name[name] = function;
}

AbstractApp* AppFactory::createByName(std::string name) {
	if (create_function_by_name.find(name) != create_function_by_name.end()) {
		return create_function_by_name[name]();
	} else {
		throw "Create function named: " + name + " is`t exist";
	}
}