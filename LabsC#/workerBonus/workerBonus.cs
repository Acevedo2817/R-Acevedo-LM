// See https://aka.ms/new-console-template for more information
using System;
namespace workerBonus // Note: actual namespace depends on the project name.
{
    internal class workerBonus
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Those who have worked for at least 5 years now get a $1000 bonus!");
            Console.WriteLine("For how long has this person been working for? (In years) ");
            int age = int.Parse(Console.ReadLine());
            if(age >= 5){
                Console.WriteLine("This worker can now get the $1000 bonus!");
            };
            if(age < 5){
                Console.WriteLine("No bonus for this worker...");
            };
        }
    }
}