#include <iostream>
#include <string>
using namespace std;
int main(){
    int i;
    string name;
    cout << "Enter your name. ";
    cin >> name;
    for(i = 0; i < 10; i++){
        cout << "Hello, " << name << "!\n";
    }
}