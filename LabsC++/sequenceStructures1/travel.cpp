#include <iostream>
using namespace std;
int main(){
    double speed, hours, distance;
    cout << "Enter the average speed of travel (in km/h). ";
    cin >> speed;
    cout << "How much did the trip take? (In hours) ";
    cin >> hours;
    distance = speed * hours;
    cout << "Given the speed of " << speed << "km/h for " << hours << " hours, you have traveled " << distance << " kilometers.";
    return 0;
}