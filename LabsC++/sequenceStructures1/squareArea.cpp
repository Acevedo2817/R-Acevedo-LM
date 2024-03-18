#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int side;
    double area;
    cout << "Enter the length of one side of the square. ";
    cin >> side;
    area = pow(side,2); //Same as "area = side * side;"
    cout << "The area of a square with a side length of " << side << " is " << area;
    return 0;
}