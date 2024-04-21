using System;
namespace workerWage{
    public class WorkerWage{
        static void Main(string[] args){
            int unit = 0, hour, extraTime = 0;
            float pay, totalPay, finalPay, extraPay = 0;
            while(unit < 3){
                unit++;
                Console.WriteLine("----------------------------------------------------------------------------------------------------\nWorker #" + unit + "\nEnter this worker's hourly pay. (In $)");
                pay = float.Parse(Console.ReadLine());
                Console.WriteLine("For how long has he/she worked? (In hours)");
                hour = int.Parse(Console.ReadLine());
                if(hour > 40){
                    extraTime = hour - 40;
                    extraPay = pay * extraTime * 2;
                }
                totalPay = (pay * hour) + extraPay;
                finalPay = totalPay / (float)1.07;
                Console.WriteLine("----------------------------------------------------------------------------------------------------");
                Console.WriteLine("Total hours worked: " + hour + " (" + extraTime + " overtime)");
                Console.WriteLine("Gross pay: $" + totalPay);
                Console.WriteLine("Payroll tax: $" + (totalPay * 0.07));
                Console.WriteLine("----------------------------------------------------------------------------------------------------");
                Console.WriteLine("Final pay: $" + finalPay);
            }
        }
    }
}