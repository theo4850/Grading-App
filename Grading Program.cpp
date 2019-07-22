#include <iostream>
#include <string>

int main() {
	int p;

	std::cout << "Please enter your points from the exam: ";
	std::cin >> p;

	if (p == 100) {
		std::cout << "You got a perfect score";
	}
	else if (p < 100 and p > 90) {
		std::cout << "You got an A! ";
	}
	else if (p < 89 and p > 80) {
		std::cout << "You got a B! ";
	}
	else if (p < 79 and p > 70) {
		std::cout << "You got a C! ";
	}
	else if (p < 69 and p > 60) {
		std::cout << "You got a D! ";
	}
	else if (p < 59) {
		std::cout << "You got an F! ";
	}

	system("pause");
	return 0;
}