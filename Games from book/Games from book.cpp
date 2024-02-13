// Программа  Die Roller
// Демонстрирует генерирование случайных чисел
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(static_cast <unsigned int> (time(0)));
	// запускаем генератор случайных чисел
	int  randomNumber = rand(); // генерируем случайное число, задаю значение от 0 до 32 767
	int die = (randomNumber % 6) + 1; // получаем число можду 1 и 6, тут просто если любое положительное число подалить на 6 и прибавить + 1 то будет диапазон от 0 до 6
		std::cout << "You rolled a " << die << std::endl;

		std::cout << "A max number: " << RAND_MAX << std::endl;  // это просто проверка, диапазона чисел, где мы генерируем случайное число
	return 0;
}