#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Those who have worked for at least 5 years now get a $1000 bonus!\n";
    cout << "For how log has this person been working here? (In years) ";
    cin >> age;
    try{
        if(age < 0){
            throw "Employement time can't be negative!";
        }
        else{
            if(age >= 5){
                cout << "This worker can now get the $1000 bonus!";
            }
            else{
                cout << "No bonus for this worker...";
            }
        }
    }
    catch(const char* error){
        cout << "ERROR: " << error;
    }
}