#include "iostream"
int multiply(int a, int b) {
	return a * b;
}
int main() {
	int a, b;
	std::cout << "Enter number a : ";
	std::cin >> a;
	std::cout << "Enter number b : ";
	std::cin >> b;
	std::cout << "Answer a * b = " << multiply(a, b) << std::endl;
	system("pause");
}