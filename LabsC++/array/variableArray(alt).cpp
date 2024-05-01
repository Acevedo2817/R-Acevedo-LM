#include <iostream>
#include <random>
using namespace std;
int main(){
    int size;
    cout << "Enter this array's size. (1 to 100) ";
    cin >> size;
    if(size < 1){
        cout << "Invalid entry!";
    }
    else if (size > 100){
        cout << "Array too big!";
    }
    else{
        int array[size], total = 0;
        for(int i1 = 0; i1 < size; i1++){
            array[i1] = rand() % 101;
            cout << "Element #" << (i1 + 1) << ": " << array[i1] << endl;
        }
        for(int i2 = 0; i2 < size; i2++){
            total += array[i2];
        }
        cout << "Total array value: " << total << endl;
    }
}