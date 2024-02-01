// Программа Designer Network
// Демонстрирует работу с логическими операторами
#include <iostream>
#include <string>
int main()
{
    std::string username;
    std::string password;

    bool success;
    std::cout << "\nGame Designer's Network\n";
        do
        {
            std::cout << "\nUsername: ";
            std::cin >> username;
            std::cout << "Password: ";
            std::cin >> password;

            if (username == "qwe" && password == "qwe123")
            {
                std::cout << "\nHello Sir.";
                success = true;
            }

            else if (username == "qaz" && password == "qaz123")
            {
                std::cout << "\nWhat's up bro!";
                success = true;
            }

            else if (username == "wsx" && password == "wsx123")
            {
                std::cout << "\nHow is it going?";
                success = true;
            }

            else if (username == "guest" || password == "guest")
            {
                std::cout << "\nWelcome guest";
                success = true;
            }

            else
            {
                std::cout << "\nYour login or password failed.";
                success = false;
            }

        } while (!success);

          return 0;
}