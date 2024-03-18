#include <iostream>
using namespace std;
int main(){
    int base, height, area;
    cout << "Enter the rectangle's base lenght. ";
    cin >> base;
    cout << "Enter the rectangle's height. ";
    cin >> height;
    area = base * height;
    cout << "The total area of this rectangle is " << area;
    return 0;
}