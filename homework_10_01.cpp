#include <iostream>
#include <string>

int main() {
	std::string name;
	setlocale(LC_ALL, "rus");
	std::cout << "Введите имя: ";
	getline(std::cin, name);
	std::cout << "Здравствуйте, " << name << "!" << std::endl;
	return 0;
}