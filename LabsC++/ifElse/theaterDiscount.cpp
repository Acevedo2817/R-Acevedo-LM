#include <iostream>
using namespace std;
int main(){
    int entries;
    int discount = 0;
    bool member;
    cout << "Under certain conditions, it's now possible to get discounts of different magnitude!\n";
    cout << "Enter the amounts of purchased entries. ";
    cin >> entries;
    cout << "Is this person a member of this theatre? (0 for 'no', anything else for 'yes'.) ";
    cin >> member;
    if(entries <= 0){
        cout << "ERROR: Purchased entry amount can't be 0 o lower!";
        exit(entries); // If the error message gets triggered, this will stop the code right here.
    }
    else{
        if(member){
            discount += 10;
            if(entries >= 5){
                discount += 5;
            }
        }
        else{
            if(entries >= 10){
                discount += 5;
            }
        }
    }
    cout << "Applicable discount: " << discount << "%";
}