#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string Name = "Luka";

    transform(Name.begin(), Name.end(), Name.begin(), ::toupper);

    cout << Name;


    return 0;

}