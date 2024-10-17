using System;

class Suma
{
    static void Main()
    {
        Console.WriteLine("Ingrese el primer número:");
        int numero1 = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Ingrese el segundo número:");
        int numero2 = Convert.ToInt32(Console.ReadLine());

        int suma = numero1 + numero2;

        Console.WriteLine("La suma de los dos números es: " + suma);
    }
}