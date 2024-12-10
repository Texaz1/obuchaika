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

	EKors::MenuItem study = { "1 - Русские писатели", EKors::study };
	EKors::MenuItem exit = { "0 - Завершить чтение", EKors::exit };

	EKors::MenuItem* main_children[] = { &exit, &study };
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);

	int user_input;
	do {
		std::cout << "Привет" << std::endl;
		for (int i = 1; i < main_size; i++) {
			std::cout << main_children[i]->title << std::endl;
		}
		std::cout << main_children[0]->title << std::endl;
		std::cout << "Обучайка: ";

		std::cin >> user_input;
		main_children[user_input]->func();

		std::cout << std::endl;
	} while (true);

	return 0;
}
