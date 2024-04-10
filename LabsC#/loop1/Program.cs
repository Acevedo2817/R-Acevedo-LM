// See https://aka.ms/new-console-template for more information
using System;
namespace loop1{
    internal class loop1{
        static void Main(string[] args){
            int i = 0;
            Console.WriteLine("Enter your name.");
            string name = Console.ReadLine();
            while(i != 10){
                i++;
                Console.WriteLine("Hello, " + name + "!");
            }
        }
    }
}