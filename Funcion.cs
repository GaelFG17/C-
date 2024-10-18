using System;

class Program
{
    static void Main(string[] args)
    {
        int result = Sum(5, 3);
        Console.WriteLine("The sum is: " + result);
    }

    static int Sum(int a, int b)
    {
        return a + b;
    }
}