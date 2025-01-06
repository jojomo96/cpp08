#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main() {
	// Test with std::vector
	std::vector vec = {1, 2, 3, 4, 5};
	try {
		const auto it = easyfind(vec, 3);
		std::cout << "Found in vector: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		const auto it = easyfind(vec, 6);
		std::cout << "Found in vector: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// Test with std::list
	std::list lst = {10, 20, 30, 40, 50};
	try {
		const auto it = easyfind(lst, 30);
		std::cout << "Found in list: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		const auto it = easyfind(lst, 60);
		std::cout << "Found in list: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
