#pragma once

#include "menu.hpp"

namespace EKors {
	const MenuItem* show_children(const MenuItem* current);
	const MenuItem* go_up(const MenuItem* current);

	const MenuItem* show_menu(const MenuItem* current);
	const MenuItem* exit(const MenuItem* current);

	const MenuItem* read_pushkin(const MenuItem* current);
	const MenuItem* read_lermontov(const MenuItem* current);
	const MenuItem* read_krilov(const MenuItem* current);
	const MenuItem* read_go_back(const MenuItem* current);

	const MenuItem* pushkin_dubrovsri(const MenuItem* current);
	const MenuItem* pushkin_onegin(const MenuItem* current);
	const MenuItem* pushkin_zimni_vecher(const MenuItem* current);
	const MenuItem* pushkin_go_back(const MenuItem* current);
}