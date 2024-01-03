#include <iostream>
int main() {

	long double score1, score2, score3;
	
	std::cout << "Enter your points amount for the first time: ";
	std::cin >> score1;

	std::cout << "Enter your point total a second time: ";
	std::cin >> score2;

	std::cout << "Enter your points amount a third time: ";
	std::cin >> score3;

	long double AverageScore;
	AverageScore = (score1 + score2 + score3) / 3.0;
	std::cout << "Average value based on three: " << AverageScore;


	return 0;
}