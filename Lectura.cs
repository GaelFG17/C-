using System;

class Lectura
{
    static void Main(string[] args)
    {
        Console.WriteLine("Ingrese su nombre:");
        string nombre = Console.ReadLine();

        Console.WriteLine("Ingrese su edad:");
        int edad = int.Parse(Console.ReadLine());

        Console.WriteLine("Ingrese su ciudad:");
        string ciudad = Console.ReadLine();

        Console.WriteLine($"Hola {nombre}, tienes {edad} años y vives en {ciudad}.");
    }
}