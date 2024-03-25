#include <iostream>
using namespace std;
int main(){
    int grade;
    cout << "Enter the obtained grade (0-20). ";
    cin >> grade;
    try{
        if((grade < 0) || (grade > 20)){
            throw "Invalid entry!";
        }
        else{
            if(grade < 11){
                cout << "REJECTED";
            }
            else if(grade >= 11){
                cout << "APPROVED";
            }
        }
    }
    catch(const char* error){
        cout << "ERROR: " << error;
    }
}