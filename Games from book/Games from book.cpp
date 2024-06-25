// Programme Hero's Inventory
// Describes some actions with massive

#include <iostream>
#include <string>

int main()
{
	const int MAX_ITEMS = 5;
	std::string inventory[MAX_ITEMS];
	
	// std::string inventory[MAX_ITEMS] = { "sword", "armor", "shield" };

	int NumItems = 0;
	inventory[NumItems++] = "sword";
	inventory[NumItems++] = "armor";
	inventory[NumItems++] = "shield";

	std::cout << "Your items:\n";

	for (int i = 0; i < NumItems; i++)
	{
		std::cout << inventory[i] << std::endl;
	}

	std::cout << "\nYou trade your sword for a battle axe.\n";
	inventory[0] = "battle axe";
	std::cout << "Your items:\n";

	for (int i = 0; i < NumItems; i++)
	{
		std::cout << inventory[i] << std::endl;
	}

	std::cout << "\nThe item name " << inventory[1] << " has ";
	std::cout << inventory[1].size() << " letters in it.\n";
	std::cout << "\nYou found a healing potion.\n";

	if (NumItems <= MAX_ITEMS)
	{
		inventory[NumItems++] = "healing potion";
	}
	else
	{
		std::cout << "You have too much items and cant carry another\n\n";
	}

	std::cout << "Your items:\n";
	for (int i = 0; i < NumItems; i++)
	{
		std::cout << inventory[i] << std::endl;
	}
	return 0;
}