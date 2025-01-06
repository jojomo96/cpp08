#pragma once
#include <vector>

class Span {
	Span();

	unsigned int _n;
	std::vector<int> _numbers;

public:
	explicit Span(unsigned int n);

	Span(const Span &other);

	~Span();

	Span &operator=(const Span &other);

	void addNumber(int number);

	int shortestSpan() const;

	int longestSpan();
};
