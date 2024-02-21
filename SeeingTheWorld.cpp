#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


int main()
{
    std::system("clear");
    std::vector<std::string> Places = {"Greece ", "Rome ", "New Zealand ", "Darien Lake", "Disney Land" };
    std::partial_sort(Places.begin(),Places.end(),Places.end());
                                                                                                   
for (auto x : Places)
{ std::cout << x <<std::endl; }
}