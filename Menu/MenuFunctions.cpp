﻿#include "MenuFunctions.hpp"

#include <cstdlib>
#include <iostream>

const EKors::MenuItem* EKors::show_children(const EKors::MenuItem* current) {
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
const EKors::MenuItem* EKors::go_up(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
};

const EKors::MenuItem* EKors::show_menu(const MenuItem* current) {
	return EKors::show_children(current);
}

const EKors::MenuItem* EKors::exit(const MenuItem* current) {
	std::exit(0);
}

const EKors::MenuItem* EKors::read_pushkin(const MenuItem* current) {
	std::cout << "Произведения Пушкина: " << std::endl;
	return EKors::show_children(current);
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
	return EKors::go_up(current);
}


const EKors::MenuItem* EKors::pushkin_dubrovsri(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const EKors::MenuItem* EKors::pushkin_onegin(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const EKors::MenuItem* EKors::pushkin_zimni_vecher(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const EKors::MenuItem* EKors::pushkin_go_back(const MenuItem* current) {
	return EKors::go_up(current);
}