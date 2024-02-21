#include <iostream>

using namespace std;

struct point
 {
    int x;
    int y;
};

point add(point point1, point point2)
{
    point newpoint;
    newpoint.x = point1.x + point2.x;
    newpoint.y = point1.y + point2.y;

    return newpoint;
}
int main()
{

    point first;
    first.x = 10;
    first.y = 20;
    point second;
    second.x = 5;
    second.y = -5;

    point sumpoint = add(first,second);

    cout << sumpoint.x << " " << sumpoint.y << endl;

    return 0;

}