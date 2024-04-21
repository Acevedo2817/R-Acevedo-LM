// See https://aka.ms/new-console-template for more information
using System;
namespace monthlyTemp{
    internal class monthlyTemp{
        static void Main(string[] args){
            int i = 0;
            float totalTemp = 0;
            float temp;
            float average = 0;
            string[] year = {"January","February","March","April","May","June","July","August","September","October","November","December"}; // This array should save space here.
            while(i < year.Length){
                Console.WriteLine("Enter the temperature of " + year[i] + " in Celsius.");
                temp = float.Parse(Console.ReadLine());
                totalTemp += temp;
                i++;
            }
            average = totalTemp / (float)12;
            Console.WriteLine("Average temperature of this year: " + average);
        }
    }
}