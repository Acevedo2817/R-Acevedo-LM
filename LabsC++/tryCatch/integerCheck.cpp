#include <iostream>
using namespace std;
int main(){
    float number;
    cout << "Enter a whole number. ";
    cin >> number;
    try{
        if((number - (int)number) != 0){
            throw "Entry is not a whole number!";
        }
        cout << "Integer entered: " << number;
    }
    catch(const char* notInteger){
        cout << "ERROR: " << notInteger;
    }
}