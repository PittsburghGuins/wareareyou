#include <iostream>
#include <string>
int main()
{
    std::string Topping1;
    std::string Topping2;
    std::string Topping3;

    std::cout << "Name 3 toppings for your pizza" << std::endl;
    std::cin >> Topping1;

    std::cout << "[" << Topping1 << "]" << " Name 2 toppings for your pizza" << std::endl;
    std::cin >> Topping2;

    std::cout << "[" << Topping1 << "]" <<" "<< "["<< Topping2 << "]" << " "<< "Name 1 topping for your pizza"<< std::endl;
    std::cin >> Topping3;

    std::cout << "[" << Topping1 << "]" <<" "<< "["<< Topping2 << "]" << " "<<"[" << Topping3 << "]" <<" "<< "the 3 toppings you need"<<std::endl;


}