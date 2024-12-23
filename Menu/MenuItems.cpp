#include "MenuItems.hpp"

#include <cstddef>

#include "MenuFunctions.hpp"

const EKors::MenuItem EKors::PUSHKIN_DUBROVSKI = {
	"1 - Дубровский", EKors::pushkin_dubrovsri, &EKors::READ_PUSHKIN
};
const EKors::MenuItem EKors::PUSHKIN_ONEGIN = {
	"2 - Евгений Онегин", EKors::pushkin_onegin, &EKors::READ_PUSHKIN
};
const EKors::MenuItem EKors::PUSHKIN_ZIMNI_VECHER = {
	"3 - Зимний вечер", EKors::pushkin_zimni_vecher, &EKors::READ_PUSHKIN
};
const EKors::MenuItem EKors::PUSHKIN_GO_BACK = {
	"0 - Выйти в предыдущее меню", EKors::pushkin_go_back, &EKors::READ_PUSHKIN
};

namespace {
	const EKors::MenuItem* const pushkin_children[] = {
		&EKors::PUSHKIN_GO_BACK,
		&EKors::PUSHKIN_DUBROVSKI,
		&EKors::PUSHKIN_ONEGIN,
		&EKors::PUSHKIN_ZIMNI_VECHER
	};
	const int pushkin_size = sizeof(pushkin_children) / sizeof(pushkin_children[0]);
}

const EKors::MenuItem EKors::READ_PUSHKIN = {
	"1 - Читать Пушкина", EKors::read_pushkin, &EKors::READ, pushkin_children, pushkin_size
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