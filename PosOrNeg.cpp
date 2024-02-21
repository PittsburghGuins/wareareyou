#include <iostream>



int main()
{
    std::string Zero = "0";
    std::string UserInput;
    while (true)
    {
            std::cin >> UserInput;
    int UserNum = stoi(UserInput);
    if(UserInput > Zero)
    {
        std::cout << "Positive" << "\n";

    }
    else if(UserInput < Zero)
    {   
        std::cout << "Negative" << "\n";
    } 
    else if(UserInput == Zero)
    {
        std::cout << "Zero" << "\n";


    }    
    else
    {


        std::cout << "Invalid" << std::endl;
    }

    }


}