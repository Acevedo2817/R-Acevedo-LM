// See https://aka.ms/new-console-template for more information
class Program{
    static void Main(){
        Console.Write("Type in a number. ");
        double number1 = int.Parse(Console.ReadLine());
        const int three = 3;
        double result = number1 / three;
        Console.WriteLine("Result: " + result);
    }
}