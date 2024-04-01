#include <iostream>
using namespace std;
int main(){
    float number;
    int intNumber;
    cout << "Enter a whole number. ";
    cin >> number;
    intNumber = number;
    try{
        if(number != intNumber){ // (number - (int)number) != 0
            throw "Entry is not a whole number!";
        }
        cout << "Integer entered: " << number;
    }
    catch(const char* notInteger){
        cout << "ERROR: " << notInteger;
    }
}