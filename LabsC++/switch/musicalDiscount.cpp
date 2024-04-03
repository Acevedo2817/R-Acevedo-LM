#include <iostream>
using namespace std;
int main(){
    int item;
    cout << "On special days, our musical instruments get a discount!\n" << "1. Guitars\n" << "2. Pianos\n" << "3. Drums\n" << "4. Violins\n" << "5. Flutes\n" << "--------------------------------------------\n" << "Select an item to reveal its discount. ";
    cin >> item;
    switch(item){
        case 1:{
            cout << "Discount on guitars: 10%";
            break;
        }
        case 2:{
            cout << "Discount on pianos: 15%";
            break;
        }
        case 3:{
            cout << "Discount on drums: 20%";
            break;
        }
        case 4:{
            cout << "Discount on violins: 12%";
            break;
        }
        case 5:{
            cout << "Discount on flutes: 8%";
            break;
        }
        default:{
            cout << "Invalid entry. Please select an existing item. ";
        }
    }
}