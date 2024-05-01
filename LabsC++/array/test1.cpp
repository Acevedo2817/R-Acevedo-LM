#include <iostream>
using namespace std;
int main(){
    int array[5] = {6,7,8,9,10};
    cout << "Array's elements:" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Element " << (i + 1) << ": " << array[i] << endl;
    }
}