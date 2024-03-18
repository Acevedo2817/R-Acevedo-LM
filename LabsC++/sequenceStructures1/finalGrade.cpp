#include <iostream>
using namespace std;
int main(){
    double grade1, grade2, grade3, grade4, allGrades, finalGrade;
    cout << "Enter the first grade. ";
    cin >> grade1;
    cout << "Enter the second grade. ";
    cin >> grade2;
    cout << "Enter the third grade. ";
    cin >> grade3;
    cout << "Enter the fourth grade. ";
    cin >> grade4;
    allGrades = grade1 + grade2 + grade3 + grade4;
    finalGrade = allGrades/4;
    cout << "The current average grade is " << finalGrade;
    return 0;
}