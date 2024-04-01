#include <iostream>
using namespace std;
int main(){
    float purchase;
    int vip = 5;
    cout << "For a limited time, buyers can now get a discount of their purchase, but only under certain conditions.\n";
    cout << "Enter the total purchase amount (in dollars). ";
    cin >> purchase;
    while((vip != 0) && (vip != 1)){ // If VIP entry is not 0 or 1, this block will ask again.
        cout << "Does this buyer have an active VIP membership? (1 for 'yes', 0 for 'no') ";
        cin >> vip;
        if((vip != 0) && (vip != 1)){
            cout << "Invalid entry. Please try again.\n";
            continue;
        }
        else{
            break;
        }
    }
    try{
        if(purchase <= 0){
            throw "Purchase number can't be 0 or lower!";
        }
        else{
            if((purchase >= 150) || (vip == 1)){
                cout << "This buyer can get the discount!";
            }
            else{
                cout << "No discount is available.";
            }
        }
    }
    catch(const char* error){
        cout << "ERROR: " << error;
    }
}