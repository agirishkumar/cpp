#include <iostream>
using namespace std;
const double pi = 3.14;

int main(){

    double area,perimeter,radius;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    area = pi*radius*radius;
    perimeter = 2*pi*radius;
    cout <<"Area of circle is: " << area <<" and perimeter is: " << perimeter;
    return 0;
}