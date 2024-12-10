#include "MenuFunctions.hpp"

#include <cstdlib>
#include <iostream>

const EKors::MenuItem* EKors::show_menu(const MenuItem* current) {
	std::cout << "Привет" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучение: ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;

	return current->children[user_input];
}

const EKors::MenuItem* EKors::exit(const MenuItem* current) {
	std::exit(0);
}

const EKors::MenuItem* EKors::read_pushkin(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const EKors::MenuItem* EKors::read_lermontov(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const EKors::MenuItem* EKors::read_krilov(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const EKors::MenuItem* EKors::read_go_back(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}