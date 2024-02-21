#include <iostream>
#include <stdlib.h>

int Multiply(int a,int b)
{
    return a * b;
}
void MultiplyResult(int a,int b)
{
    int result = Multiply(a,b);
    std::cout << result << std::endl;
}
void Bluelog(const char* message)
{
    std::cout << message << "\033" <<std::endl;
}
void Redlog(const char* message)
{
    std::cout <<  "\033[1;31" << message <<std::endl;
}


int main()
{   
    MultiplyResult(3,5);
    MultiplyResult(201,2000);

    Redlog("Hello");


}