#include <iostream>
using namespace std;
int num1 = 13;
int num2 = 7;
int op1(){
    return (num1 + num2);
}
int op2(){
    return (num1 - num2);
}
int main(){
    cout << "Sum of both numbers: " << op1() << "\n";
    cout << "Substraction of both numbers: " << op2();
}