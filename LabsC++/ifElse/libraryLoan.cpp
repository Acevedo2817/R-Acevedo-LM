#include <iostream>
using namespace std;
int main(){
    int active;
    cout << "Due to unfortunate circumstances, only those with an active library card can loan books.\n";
    cout << "Does this user have an active card? (Anything other than 0 means it's active.) ";
    cin >> active;
    if(active != 0){
        cout << "This user can loan a book from this library. Treat it with care!";
    }
    else{
        cout << "Sorry, this user can't loan.";
    }
}