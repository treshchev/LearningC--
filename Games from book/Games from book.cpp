// Программа Game Stats 2.0
// Демонстрирует арифметические операции с переменными
#include <iostream>
int main()
{
	unsigned int score = 6000;
	std::cout << "score: " << score <<std::endl;
	// изменение значения переменной
	score = score + 100;
	std::cout << "score: " << score << std::endl;
	// комбинированный оператор присваивания
	score += 1000;
	std::cout << "score: " << score << std::endl;
	// операторы инкремента
	int lives = 3;
	++lives;
	std::cout << "lives: " << lives << std::endl;
	lives = 3;
	lives++;
	std::cout << "lives: " << lives << std::endl;
	lives = 3;
	int bonus = ++lives * 10;
	std::cout << "lives.bonus = " << lives << ", " << bonus << std::endl;
	lives = 3;
	bonus = lives++ * 10;
	std::cout << "lives.bonus = " << lives << ", " << bonus << std::endl;
	// целочисленное переполнение
	score = 67537457;
	std::cout << "\nscore: " << score << std::endl;
	++score;
	std::cout << "score: " << score << std::endl;
	score = score - score;
	std::cout << "score: " << score << std::endl;
	return 0;

}