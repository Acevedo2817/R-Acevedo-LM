#include <iostream>
using namespace std;
int overtime(int pay, int hour){
    int extraTime = hour - 40;
    float extraPay = pay * extraTime * 2;
    return extraPay;
}
int main(){
    int unit, hour;
    float pay, totalPay, finalPay;
    float extraTime = 0, extraPay = 0;
    for(unit = 1; unit < 4; unit++){
        cout << "---------------------------------------------------------------------------------------------------\nWorker #" << unit << "\n";
        cout << "Enter this worker's hourly pay. $";
        cin >> pay;
        cout << "For how long has he/she worked? (In hours) ";
        cin >> hour;
        if(hour > 40){
            extraTime = hour - 40;
            extraPay = overtime(pay, hour);
        }
        totalPay = (pay * hour) + extraPay;
        finalPay = totalPay / 1.07;
        cout << "---------------------------------------------------------------------------------------------------\n";
        cout << "Total hours worked: " << hour << " (" << extraTime << " overtime)\n";
        cout << "Gross pay: $" << totalPay << "\n";
        cout << "Payroll tax: $" << (totalPay * 0.07) << "\n";
        cout << "---------------------------------------------------------------------------------------------------\n";
        cout << "Final pay: $" << finalPay << "\n";
    }
}