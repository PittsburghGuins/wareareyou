#include <iostream>
int main()
{
    int day = 4;

    switch (day)
    {
    case 1:
     std::cout << "monday";
        break;
    case 4:
    std::cout << "thursday";
        break;
         default: std::cout << "invalid number";
    }

}