using System;

class Program
{
    // Method to check if a string represents a valid number
    static bool IsNumber(string str)
    {
        if (string.IsNullOrWhiteSpace(str))
        {
            return false;
        }

        foreach (char c in str)
        {
            if (!char.IsDigit(c))
            {
                return false;
            }
        }
        return true;
    }

    // Method to print odd numbers between two values
    static void PrintOddNumbersBetween(string input1, string input2)
    {
        if (int.TryParse(input1, out int m) && int.TryParse(input2, out int n))
        {
            // Ensure m is the smaller number and n is the larger number
            int start = Math.Min(m, n);
            int end = Math.Max(m, n);

            Console.WriteLine($"The Odd Numbers Between {start} and {end}:");

            // Print odd numbers between start and end
            for (int i = start; i <= end; i++)
            {
                if (i % 2 != 0)
                {
                    Console.Write(i + " ");
                }
            }
            Console.WriteLine();
        }
        else
        {
            Console.WriteLine("Enter valid numbers as values!");
        }
    }

    static void Main()
    {
        Console.WriteLine("Enter two values:");
        string input1 = Console.ReadLine();
        string input2 = Console.ReadLine();

        PrintOddNumbersBetween(input1, input2);
    }
}
