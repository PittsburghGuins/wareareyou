#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int f = 11;
    string fav = "My favorite number is ";

    transform(fav.begin(), fav.end(), fav.begin(), ::toupper);

    cout << "My favorite number is " << f << "\n";



}