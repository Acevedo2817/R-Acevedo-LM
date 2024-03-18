#include <iostream>
using namespace std;
int main(){
    double celsius, farhenheit;
    cout << "Enter the current temperature in Celsius. ";
    cin >> celsius;
    farhenheit = (celsius * 9/5) + 32;
    cout << "The current temperature in Fahrenhein is " << farhenheit;
    return 0;
}