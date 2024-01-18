// Программа Play Again 2.0
// Демонстрирует работу с циклом do
#include <iostream>
int main()
{
	char round;
	do
	{
		std::cout << "\n**Played an exting game**";
		std::cout << "\nDo you want to play again? (y/n)";
		std::cin >> round;

	} while (round == 'y');
	
		std::cout << "\nOk bye";
		return 0;
	
}