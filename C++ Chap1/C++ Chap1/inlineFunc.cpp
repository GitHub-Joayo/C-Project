#include <iostream>

inline int SQUARE(int x) {
	return x * x;
}

int asdf(void) {

	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;

	system("pause");

	return 0;

}