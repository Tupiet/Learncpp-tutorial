#include <iostream>
#include <limits>

int main() {
	// Yep, another Hello world!
	std::cout << "Hello world!";

	// This will make the app stop, and wait before we press any button for closing it.
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}