#include <iostream>

enum Difficulty 
{
    EASY = 1,
    NORMAL = 2,
    HARD = 3
};

int main() {
    std::cout << "Difficulty Levels\n";
    std::cout << "1 - Easy\n";
    std::cout << "2 - Normal\n";
    std::cout << "3 - Hard\n";

    int choice;
    std::cout << "Choice: ";
    std::cin >> choice;

    switch (choice) {
    case EASY:
        std::cout << "You picked Easy.\n";
        break;
    case NORMAL:
        std::cout << "You picked Normal\n";
        break;
    case HARD:
        std::cout << "You picked Hard\n";
        break;
    default:
        std::cout << "Invalid choice\n";
    }

    return 0;
}