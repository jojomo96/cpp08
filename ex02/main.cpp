#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main() {
	// Test MutantStack
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top element (MutantStack): " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop (MutantStack): " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "MutantStack elements (using begin and end): ";
	for (const int & it : mstack) {
		std::cout << it << " ";
	}
	std::cout << std::endl;

	std::cout << "MutantStack elements (using rbegin and rend): ";
	for (auto rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
		std::cout << *rit << " ";
	}
	std::cout << std::endl;

	std::cout << "MutantStack elements (using cbegin and cend): ";
	for (const int cit : mstack) {
		std::cout << cit << " ";
	}
	std::cout << std::endl;

	std::cout << "MutantStack elements (using crbegin and crend): ";
	for (auto crit = mstack.crbegin(); crit != mstack.crend(); ++crit) {
		std::cout << *crit << " ";
	}
	std::cout << std::endl;

	// Test std::list
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << "Top element (list): " << lst.back() << std::endl;
	lst.pop_back();
	std::cout << "Size after pop (list): " << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::cout << "List elements: ";
	for (const int &it : lst) {
		std::cout << it << " ";
	}
	std::cout << std::endl;

	return 0;
}
