#include <iostream>
#include <cmath>
using namespace std;
float calculateArea(float radius){
    float area = M_PI * pow(radius, 2);
    return area;
}
int main(){
    float radius;
    cout << "Enter the circle's radius. ";
    cin >> radius;
    if(radius == 0){
        cout << "ERROR: Invalid entry!";
    }
    else{
        float area = calculateArea(radius);
        cout << "Are of this circle: " << area;
    }
}