#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include <vector>
#include <random>

int main()
{
 std::vector<int> items{1, 2, 3}; 
    std::random_device rd; 
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(0, items.size() - 1);
    std::cout <<  items[distr(eng)];
    return 0;
}