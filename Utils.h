#ifndef _UTILS_H__
#define _UTILS_H__
#include <iostream>

class Utils {
public:
	static int getInt(int min, int max) {
		int num;
		do {
			std::cin >> num;
			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(1000, '\n');
				std::cout << "Invalid input, try again: ";
			}
			else if (num < min || num > max) {
				std::cout << "Invalid input, try again: ";
			}
		} while (num < min || num > max);
		return num;
	};
};
#endif // !_UTILS_H__
