// See https://aka.ms/new-console-template for more information
class Program{
    static void Main(){
        Console.Write("Type in a number. ");
        int num1 = int.Parse(Console.ReadLine());
        Console.Write("Type in another number. ");
        int num2 = int.Parse(Console.ReadLine());
        float step1 = (float) num1 + num2;
        Console.WriteLine("Step 1: " + num1 + "+" + num2 + "=" + step1);
        float result = step1 / 3;
        Console.WriteLine("Result: " + result);
    }
}