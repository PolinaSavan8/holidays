#include<iostream>
int sum(int a, int b) {
	return a + b;
}
int main() {
	int a, b;
	std::cout << "Enter number a: ";
	std::cin >> a;
	std::cout << "Enter number b: ";
	std::cin >> b;
	std::cout << "Result a + b =" << sum(a, b) << std::endl;
}