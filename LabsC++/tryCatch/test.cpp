#include <iostream>
using namespace std;
int main(){
    float numerator, denominator, result;
    cout << "Enter the numerator. ";
    cin >> numerator;
    cout << "Enter the denominator. ";
    cin >> denominator;
    try{
        if(denominator == 0){
            throw "Can't divide by zero!";
        }
        result = numerator/denominator;
        cout << "Result: " << result;
    }
    catch(const char* error1){
        cout << "ERROR: " << error1;
    }
}