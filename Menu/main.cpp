#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "MenuFunctions.hpp"

int main() {
	std::setlocale(LC_ALL, "");

	EKors::MenuItem read_pushkin = { "1 - Читать Пушкина", EKors::read_pushkin };
	EKors::MenuItem read_lermontov = { "2 - Читать Лермонтова", EKors::read_lermontov };
	EKors::MenuItem read_krilov = { "3 - Читать Крылова", EKors::read_krilov };
	EKors::MenuItem read_go_back = { "0 - Выйти в главное меню", EKors::read_go_back };

	EKors::MenuItem* read_children[] = {
		&read_go_back,
		&read_pushkin,
		&read_lermontov,
		&read_krilov
	};
	const int read_size = sizeof(read_children) / sizeof(read_children[0]);

	EKors::MenuItem read = { "1 - Русские писатели", EKors::show_menu, read_children, read_size };
	EKors::MenuItem exit = { "0 - Завершить чтение", EKors::exit };

	EKors::MenuItem* main_children[] = { &exit, &read };
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);

	EKors::MenuItem main = { nullptr, EKors::show_menu, main_children, main_size };

	read_pushkin.parent = &read;
	read_lermontov.parent = &read;
	read_krilov.parent = &read;
	read_go_back.parent = &read;

	read.parent = &main;
	exit.parent = &main;

	const EKors::MenuItem* current = &main;
	do {
		current = current->func(current);
	} while (true);

	return 0;
}
