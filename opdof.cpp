#include <iostream>

using namespace std;

struct RGBColor
 {
    int red;
    int green;
    int blue;
};
int main()
{

    RGBColor mycolor;
    mycolor.red = 200;
    mycolor.green = 100;
    mycolor.blue = 175;

    cout << "Color is: " << mycolor.red << " " << mycolor.green << " " << mycolor.blue << endl;

    return 0;

}