#pragma once

// MutantStack.tpp
template<typename T>
MutantStack<T>::MutantStack() = default;

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other) = default;

template<typename T>
MutantStack<T>::~MutantStack() = default;

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other) = default;

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return std::stack<T>::c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return std::stack<T>::c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const {
	return std::stack<T>::c.cbegin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const {
	return std::stack<T>::c.cend();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
	return std::stack<T>::c.rbegin();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
	return std::stack<T>::c.rend();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const {
	return std::stack<T>::c.crbegin();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const {
	return std::stack<T>::c.crend();
}
