#include <iostream>
#include <random>
#include <unistd.h>
#include <string>
#define clear std::system("clear");

int main()
{
    
    clear;
    std::random_device rd;
    std::uniform_int_distribution<int> dist(1,100); 
    int num = dist(rd);
    int UserNum;
    bool play;
    play = true;
    while(play)
    {
        std::cout << "Guess the number" << std::endl;
        std::cin >> UserNum;

        if(UserNum == num)
    {
                clear;
                std::cout << "You have guessed correct! The answer was " << num<< std::endl;
                sleep(3);
                clear;
                play = false;
    }
        else if(UserNum > num)
    {
            clear;
            std::cout <<"["<< UserNum <<"]"<< "The number is lower" <<std::endl;
    }
              else if(UserNum < num)
    {
            clear;
            std::cout <<"["<< UserNum <<"]"<< "The number is higher" <<std::endl;
    } 
    
    }
    return 0;
}