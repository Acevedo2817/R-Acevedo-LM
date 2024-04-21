#include <iostream>
#include <string>
using namespace std;
int main(){
    int i;
    float temp;
    float totalTemp, average;
    string arr[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"}; // This array should save space once we get to the loop.
    for(i = 0; i <= 11; i++){
        cout << "Enter the temperature of " << arr[i] << " in Celsius. ";
        cin >> temp;
        totalTemp += temp;
    }
    average = totalTemp/12;
    cout << "Averave temperature of this year: " << average;
}