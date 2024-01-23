// Программа Finicky Counter
// Демонстрирует работу с интрукциями break и  continue
#include <iostream>
int main()
{
	int count = 0;
	while (true)  // задаю значение true и теперь цикл не может быть false
	{
		count++;
		// заканчиваес цикл, если значение count превышает 10

		if (count > 5) // тут я задаю параментры бесконечного цикла, так как true это бесконечный цикл
		{
			break;
		}

		// пропускаем число 5
		if (count == 1)
		{
			continue;
		}
		std::cout << count << std::endl;
	}
	return 0;
}