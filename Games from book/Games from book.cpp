// Game Stats 2.0 program
// Demonstrates arithmetic operations with variables
#include <iostream>
int main()
{
	unsigned int score = 6000;
	std::cout << "score: " << score <<std::endl;
	// changing the value of a variable
	score = score + 100;
	std::cout << "score: " << score << std::endl;
	// combined assignment operator
	score += 1000;
	std::cout << "score: " << score << std::endl;
	// increment operators
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
	// integer overflow
	score = 4294967295;
	std::cout << "\nscore: " << score << std::endl;
	++score;
	std::cout << "score: " << score << std::endl;
	return 0;

}