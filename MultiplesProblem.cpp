#include <iostream>
#include <math.h>


int main()
{   
    int n = 1000;
     int a = 0;
        for(int i = 0; i <=n; i++)
            if(i % 3 == 0 || i % 5 == 0)
                a = a + i;
    
    std::system("clear");

    std::cout << a << std::endl;
}






