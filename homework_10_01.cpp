#include <iostream>
#include <string>

int main() {
	std::string name;
	setlocale(LC_ALL, "rus");
	std::cout << "������� ���: ";
	getline(std::cin, name);
	std::cout << "������������, " << name << "!" << std::endl;
	return 0;
}