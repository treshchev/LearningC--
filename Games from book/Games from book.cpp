//Программа Score Rater 
// Прогрмма демонстриурет работу с инструкцией if
#include <iostream>
int main() {
	if (true)
	{
		std::cout << "This is always displayed.\n\n";
	}
	if (false)
	{
		std::cout << "This is never displayed.\n\n";
	}
	int score = 1000;
	if (score)
	{
		std::cout << "At least you didnt score zero.\n\n";
	}
	if (score >= 350)
	{
		std::cout << "You scored 350 or more. Decent.\n\n";
	}
	if (score >= 500)
	{
		std::cout << "You scored 500 or more. Nice.\n\n";
		if (score >= 1000)
		{
			std::cout << "You scored 1000 or more. Impressive!\n";
		}
	}
	return 0;
}