#include "Span.hpp"
#include <algorithm>
#include <stdexcept>
#include <vector>

Span::Span() : _n(0) {}

Span::Span(const unsigned int n) : _n(n) {}

Span::Span(const Span &other) = default;

Span::~Span() = default;

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		_n = other._n;
		_numbers = other._numbers;
	}
	return *this;
}

void Span::addNumber(const int number) {
	if (_numbers.size() >= _n) {
		throw std::out_of_range("Span is full");
	}
	_numbers.push_back(number);
}

int Span::shortestSpan() const {
	if (_numbers.size() < 2) {
		throw std::logic_error("Not enough numbers to find a span");
	}
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int shortest = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size() - 1; ++i) {
		if (const int span = sorted[i + 1] - sorted[i]; span < shortest) {
			shortest = span;
		}
	}
	return shortest;
}

int Span::longestSpan() const {
	if (_numbers.size() < 2) {
		throw std::logic_error("Not enough numbers to find a span");
	}
	const int min = *std::min_element(_numbers.begin(), _numbers.end());
	const int max = *std::max_element(_numbers.begin(), _numbers.end());
	return max - min;
}
