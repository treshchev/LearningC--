// Lost treasure
// Adventure Game Personalization
#include <iostream>
#include <string>



int main() {

const int GOLD_PIECES = 900;
int adventures, killed, survivors;
std::string leader;
    // Getting information
    std::cout << "Welcome to Lost Fortune\n\n";
    std::cout << "Please enter the following for your personalized adventure\n";

    std::cout << "Enter a number: ";
    std::cin >> adventures;

    std::cout << "Enter a number smaller than the first: ";
    std::cin >> killed;
    survivors = adventures - killed;

    std::cout << "Enter your last name: ";
    std::cin >> leader;

    // Plot
    std::cout << "\nA brave group of " << adventures << " set out on a quest " << std::endl;
    std::cout << "- - in search of the lost reasure of the Ancient Dwarves. " << std::endl;
    std::cout << "The group was led by that legendary rogue, " << leader << ".\n" << std::endl;
    std::cout << "\nAlong the way, a band of maruarding ogres abbushed the party. " << std::endl;
    std::cout << "All fought braveky under the command of " << leader << std::endl;
    std::cout << "and the ogres were defeated, but at a cost. " << std::endl;
    std::cout << "Of the adventures, " << killed << " were vanquished" << std::endl;
    std::cout << "leaving just" << survivors << " in the group.\n" << std::endl;
    std::cout << "\nThe party was about to give up all hope. " << std::endl;
    std::cout << "But while laying the deceased to rest, " << std::endl;
    std::cout << "they stumbled upon the buried fortune. " << std::endl;
    std::cout << "So the adventures split " << GOLD_PIECES << " gold pieces. ";
    std::cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
    std::cout << " pieces to keep things fair of course.\n";

    return 0;
}