#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
#include <array>

class Monitor1 {
    public:
    const int WIDTH = 2560;
    const int HEIGHT = 1440;
};
class Monitor2 {
    public:
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
};
class Monitor3 {
    public:
    const int WIDTH = 600;
    const int HEIGHT = 400;
};


int main()
{
   

    
    Monitor1 Mon1;
    Monitor2 Mon2;
    Monitor3 Mon3;
    std::string TheMon = "The monitor size is ";
    transform(TheMon.begin(), TheMon.end(), TheMon.begin(), ::toupper);
    std::system("clear");

 
   

    //putting Width in vector
     const std::vector<int> WidthList{Mon1.WIDTH, Mon2.WIDTH, Mon3.WIDTH};
    //creating random engine
    std::random_device rd; 
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(0, WidthList.size() - 1);
    //putting Height in vector
         const std::vector<int> HeightList{Mon1.HEIGHT, Mon2.HEIGHT, Mon3.HEIGHT};
    //2nd random engine
    std::random_device nd; 
    std::mt19937 dug(nd());
    std::uniform_int_distribution<> distru(0, HeightList.size() - 1);


    // stading to display TheMon, and generated widthXheight
    std::cout << TheMon << WidthList[distr(eng)] << "x" << HeightList[distru(dug)] << '\n';
    

   
    
    return 0;
    





}