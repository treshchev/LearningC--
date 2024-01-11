// Программа Menu Chooser
// Демонстрирцет работу с интсрукццией switch
#include <iostream>
int main()
{
	std::cout << "Difficulty Levels\n\n";
	std::cout << "1 - Easy\n";
	std::cout << "2 - Normal\n";
	std::cout << "3 - Hard\n";
	int choice;
	std::cout << "Choice: ";
	std::cin >> choice;

	switch (choice)
	{
		// в команде case можно написать любое число, 
		// и в зависимости от написанного числа, будет выводится тот или иной текст
		// I write these commands for myself to better understand the code and various commands
	case 1:
		std::cout << "You picked Easy.\n";
		break;
	case 2:
		std::cout << "You picked Normal\n";
		break;
	case 3:
		std::cout << "You picked Hard\n";
		break;
		// команда default используется, если мы введём любое другое число (кроме 1, 2, 3) то у нас
		// на экран выводится именно этот текст, который мы написали в default 
		// I write these commands for myself to better understand the code and various commands
	default:
		std::cout << "You made an illegal choice.\n";

	}
	return 0;
}