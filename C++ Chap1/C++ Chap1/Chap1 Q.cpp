#include <iostream>

namespace BestComImpl {
	void SimpleFunc(void);
	void PrettyFunc(void);
}

namespace ProgComImpl {
	void SimpleFunc(void);
}

int main(void) {

	/* Que 1
	int num = 0, result = 0;

	for (int i = 0; i < 5; i++) {

		std::cout << "Input Num : ";
		std::cin >> num;
		result += num;

	}

	std::cout << "Sum result : " << result;

	*/

	/* Que 2

	char name[20], phone[20];

	std::cout << "Input name ";
	std::cin >> name;

	std::cout << "Input phone num ";
	std::cin >> phone;

	std::cout << "Name : " << name << "\nPhone Num : " << phone;

	*/

	/* Que 3 

	int dan = 0;

	std::cout << "Input Dan : ";
	std::cin >> dan;

	for (int i = 1; i < 10; i++) 
		std::cout << dan << " X " << i << " : " << dan * i << std::endl;

	*/

	/* Que 4 

	int inc = 0;

	while (inc != -1) {

		std::cout << "Input money(end -1) : ";
		std::cin >> inc;
	
		if (inc == -1)
			break;

		std::cout << "Pay is " << 50 + (inc * 0.12) << std::endl;

	}

	*/

	/*
	std::cout << SimpleFunc() << std::endl;
	std::cout << SimpleFunc(9) << std::endl;

	*/

	BestComImpl::PrettyFunc();
	ProgComImpl::SimpleFunc();

	system("pause");

	return 0;

}

void BestComImpl::SimpleFunc(void) {
	std::cout << "Bestcom" << std::endl;
}

void BestComImpl::PrettyFunc(void) {
	std::cout << "Pretty" << std::endl;
	SimpleFunc();
	ProgComImpl::SimpleFunc();
}

void ProgComImpl::SimpleFunc(void) {
	std::cout << "Progcom" << std::endl;
}