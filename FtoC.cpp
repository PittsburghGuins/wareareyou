#include <iostream>
#include <unistd.h>
#include <string>

double ftoc(double f)
{
    return (f-32)/1.8;
}
double ctof(double c)
{
    return (c*9/5)+32;
}

int main()
{
    std::system("clear");
    int a;
    double x;
    std::cout << "°F to °C calculator: Type 1 to convert to °C, Type 2 to convert to °F" <<std::endl;
    std::cin >> a;
    if (a = 1)
    {
        std::system("clear");
        std::cout << "Type the °F wanted to convert to °C" <<std::endl;
        std::cin >> x ;
        std::system("clear");
        double c = ftoc(x);
        std::cout << c << std::endl;
    }
    else
    {
        std::system("clear");
         std::cout << "Type the °C wanted to convert to °F" <<std::endl;
         std::cin >> x ;
         std::system("clear");
         double f = ctof(x);
         std::cout << f << std::endl;
    }

    return 0;
}