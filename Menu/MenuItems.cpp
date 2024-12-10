#include "MenuItems.hpp"

#include <cstddef>

#include "MenuFunctions.hpp"

const EKors::MenuItem EKors::READ_PUSHKIN = { 
	"1 - Читать Пушкина", EKors::read_pushkin, &EKors::READ
};
const EKors::MenuItem EKors::READ_LERMONTOV = {
	"2 - Читать Лермонтова", EKors::read_lermontov, &EKors::READ
};
const EKors::MenuItem EKors::READ_KRILOV = {
	"3 - Читать Крылова", EKors::read_krilov, &EKors::READ
};
const EKors::MenuItem EKors::READ_GO_BACK = {
	"0 - Выйти в главное меню", EKors::read_go_back, &EKors::READ
};

namespace {
	const EKors::MenuItem* const read_children[] = {
		&EKors::READ_GO_BACK,
		&EKors::READ_PUSHKIN,
		&EKors::READ_LERMONTOV,
		&EKors::READ_KRILOV
	};
	const int read_size = sizeof(read_children) / sizeof(read_children[0]);
}

const EKors::MenuItem EKors::READ = { 
	"1 - Русские писатели", EKors::show_menu, &EKors::MAIN, read_children, read_size
};
const EKors::MenuItem EKors::EXIT = {
	"0 - Завершить чтение", EKors::exit, &EKors::MAIN
};

namespace {
	const EKors::MenuItem* const main_children[] = { 
		&EKors::EXIT, 
		&EKors::READ
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
};

const EKors::MenuItem EKors::MAIN = {
	nullptr, EKors::show_menu, nullptr, main_children, main_size
};