#pragma once

namespace EKors{
	struct MenuItem {
		const char* const title;
		void (*func)();
	};
}