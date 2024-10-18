using System;

class Ejercicio3
{
    static void Main(string[] args)
    {
        for (int i = 1; i <= 10; i++)
        {
            if (i % 2 == 0)
            {
                Console.WriteLine($"{i} es un número par.");
            }
            else
            {
                Console.WriteLine($"{i} es un número impar.");
            }
        }
    }
}