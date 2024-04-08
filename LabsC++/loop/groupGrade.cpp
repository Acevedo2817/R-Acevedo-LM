#include <iostream>
#include <string>
using namespace std;
int main(){
    int group, i;
    float grade, average;
    float totalGrade = 0;
    string name;
    cout << "Enter the amount of students. (0 to 10) ";
    cin >> group;
    try{
        if((group <= 0) || (group > 10)){
            throw "Student count can't be lower than 1 or larger than 10!";
        }
        cout << "--------------------------------------------------------------------------------------------------\n";
        for(i = 1; i <= group; i++){
            cout << "Student #" << i << ":\n";
            cout << "Enter the student's name. ";
            cin >> name;
            cout << "Enter " << name << "'s final grade. ";
            cin >> grade;
            if(grade < 0){
                throw "Negative grades are not permitted!";
            }
            totalGrade += grade;
            cout << "--------------------------------------------------------------------------------------------------\n";
        }
        average = totalGrade/group;
        cout << "The total average grade of this group is " << average;
    }
    catch(const char* error){
        cout << "ERROR: " << error;
    }
}