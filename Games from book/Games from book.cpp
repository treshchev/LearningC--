// Игра Guess My Number
// Классическая игра в угадывание чисел
#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
	srand(static_cast<unsigned int>(time(0))); // запускаем генератор случайных чисел
	int secretNum = rand() % 100 + 1; // случайное число в диапазоне от 1 до 100
	int tries = 0;
	int guess = 0;
	std::cout << "\Guess My Number!\n\n";
	while (guess != secretNum)
	{
		std::cout << "Enter a guess: ";
		std::cin >> guess;
		++tries;
		if (guess > secretNum)
		{
			std::cout << "Too Hight!\n\n";
		}
		else if (guess < secretNum)
		{
			std::cout << "Too Low!\n\n";
		}
		else
		{
			std::cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	}
	return 0;
}