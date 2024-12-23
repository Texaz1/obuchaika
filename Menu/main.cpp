#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "MenuFunctions.hpp"
#include "MenuItems.hpp"

int main() {
	std::setlocale(LC_ALL, "");

	std::cout << "Привет" << std::endl;

	const EKors::MenuItem* current = &EKors::MAIN;
	do {
		current = current->func(current);
	} while (true);

	return 0;
}
