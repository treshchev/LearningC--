// Программа Score Rater 3.0
// Демонстрирует работу с последовательностью if else - if else
#include <iostream>
int main() 
{
	int score;
	std::cout << "Enter your score: ";
	std::cin >> score;
	if (score >= 1000)
	{
		std::cout << "You scored 1000 or more";
	}
	else if (score >= 500)
	{
		std::cout << "You scored 500 or more. Nice.\n";
	}
	else if (score >= 250)
	{
		std::cout << "You scored 250 or more. Decent.\n";
	}
	else
	{
		std::cout << "You scored less than 250. Nothing to brag about.\n";
	}
	return 0;
}