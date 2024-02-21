#include <iostream>

int main()
 {
    std::string input;
    std::getline(std::cin, input);

    for(int i = 1; i <= input.length(); i++)
    {
        std::cout << input[input.length() - i];
    }

    std::cout << '\n';
    return 0;
}