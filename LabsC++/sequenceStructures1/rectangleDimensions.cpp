#include <iostream>
using namespace std;
// Just testing something...
// Operation Block 1
int op1(int base, int height){
    double perimeter;
    perimeter = (2 * base) + (2 * height);
    return (perimeter);
}
// Operation Block 2
int op2(int base, int height){
    double area;
    area = base * height;
    return (area);
}
int main(){
    int base, height;
    double perimeter, area;
    cout << "Enter the rectangle's base length. ";
    cin >> base;
    cout << "Enter the rectangle's height. ";
    cin >> height;
    perimeter = op1(base, height);
    area = op2(base, height);
    cout << "This rectangle has a perimeter of " << perimeter << " and an area of " << area;
    return 0;
}