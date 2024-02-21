#include <iostream>
#include <string>
#include <vector>


int main()
{
    std::string Guess;
    std::string car[4] = {"Ferrari", "Porche", "Audi", "Toyota"};

    std::cout << "Guess the car brand" << std::endl;

    std::cin >> Guess;

    if(Guess == car[4])
    {   
        std::cout << "You guessed correct " << std::endl;

    }
    else if(Guess != car[4])
    {
        std::cout << "You guess was incorrect" << std::endl;


    }

}