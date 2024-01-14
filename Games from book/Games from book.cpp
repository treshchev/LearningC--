// Программа Play Again
// Демонстрирует работу с циклом while
#include <iostream>
int main()
{
	char again = 'y';
	while (again == 'y')
	{
		std::cout << "\n**Played an exiting game**";
		std::cout << "\nDo you want to play again? (y/n): ";
		std::cin >> again;

	}
	std::cout << "\nOkay. bye.";
	return 0;
}