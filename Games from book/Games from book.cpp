// Программа Counter
// Демонстрирует работу с циклами for
#include <iostream>
int main()
{
	std::cout << "Counting forward:\n";
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i << " ";
	}
	std::cout << "\n\nCounting backward:\n";
	for (int i = 9; i >= 0; i--)
	{
		std::cout << i << " ";
	}
	std::cout << "\n\nCounting by fives:\n";
	for (int i = 0; i <= 50; i += 5)
	{
		std::cout << i << " ";
	}
	std::cout << "\n\nCounting with null statements:\n";
	int count = 0;
	for (; count < 10;)
	{
		std::cout << count << " ";
		++count;
	}
	std::cout << "\n\nCounting with nested for loops:\n";
	const int ROWS = 5;
	const int COLUMS = 3;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int k = 0; k < COLUMS; ++k)
		{
			std::cout << i << "," << k << " ";
		}
		std::cout << std::endl;
	}
	return 0;

}