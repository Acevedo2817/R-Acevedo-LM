#include <iostream>
using namespace std;
float pay(float sale){
    int bonus = 0;
    if(sale >= 1500){
        bonus = 125;
    }
    float wage = (sale * 0.15) + bonus;
    return wage;
}
int main(){
    float sale, wage;
    cout << "Enter this day's sale amount. ";
    cin >> sale;
    wage = pay(sale);
    cout << "Wage of the day: " << wage;
}