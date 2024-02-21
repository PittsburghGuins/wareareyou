#include <iostream>
#include <algorithm>   
#include <string>

using namespace std;
int main()
{
    string koi = "fish are okay";       
    transform(koi.begin(), koi.end(), koi.begin(), ::toupper);

    cout << koi << "\n";

}