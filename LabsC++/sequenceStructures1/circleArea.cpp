#include <iostream>
using namespace std;
int main(){
    double radius, area;
    const double Pi = 3.14;
    cout << "Enter the circle's radius. ";
    cin >> radius;
    area = Pi * radius * radius;
    cout << "The area of the circle is " << area;
    return 0;
}