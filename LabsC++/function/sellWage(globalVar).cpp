#include <iostream>
using namespace std;
float wage; // <- Global variable here
float pay(float sale){
    int bonus = 0; // <- A local variable
    if(sale >= 1500){
        bonus = 125;
    }
    wage = (sale * 0.15) + bonus;
    return wage;
}
int main(){
    float sale; // <- Another local variable
    cout << "Enter this day's sale amount. ";
    cin >> sale;
    wage = pay(sale);
    cout << "Wage of the day: " << wage;
}