#include <iostream>
using namespace std;
int main(){
    int birthYear, age;
    const int currentYear = 2024;
    cout << "Enter the year of birth. ";
    cin >> birthYear;
    age = currentYear - birthYear;
    // This is an IF/ELSE failsafe. Nothing to see here.
    if(age < 0){
        cout << "ERROR: Invalid result! (Negative age is impossible.)";
    }
    else{
        cout << "Your current (approximate) age is " << age;
    }
    return 0;
}