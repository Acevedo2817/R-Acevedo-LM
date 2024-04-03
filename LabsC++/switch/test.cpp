#include <iostream>
using namespace std;
int main(){
    int option;
    cout << "MENU:\n" << "1. Coffee\n" << "2. Tea\n" << "3. Hot Chocolate\n" << "4. Orange Juice\n" << "-------------------------------------\n" << "Please select your order. ";
    cin >> option;
    switch(option){
        case 1:{
            cout << "Price of the coffee: $2";
            break;
        }
        case 2:{
            cout << "Price of the tea: $1.50";
            break;
        }
        case 3:{
            cout << "Price of the hot chocolate: $2.50";
            break;
        }
        case 4:{
            cout << "Price of the orange juice: $3";
            break;
        }
        default:{
            cout << "Invalid entry. Please select a drink from the menu. ";
        }
    }
}