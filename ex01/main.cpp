#include "Span.hpp"
#include <iostream>

int main() {
	// Test constructor and addNumber
	Span sp(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	// Test shortestSpan
	try {
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// Test longestSpan
	try {
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// Test exception when adding more numbers than capacity
	try {
		sp.addNumber(42);
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// Test exception when calculating span with less than 2 numbers
	Span sp2(2);
	sp2.addNumber(1);
	try {
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }
