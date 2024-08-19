using System;

bool IsNumber(string str)
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

void PrintOddNumbersBetween(string input1, string input2)
{
    if (int.TryParse(input1, out int m) && int.TryParse(input2, out int n))
    {
        int start = Math.Min(m, n);
        int end = Math.Max(m, n);

        Console.WriteLine($"The Odd Numbers Between {start} and {end}:");

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

Console.WriteLine("Enter two values:");
string input1 = Console.ReadLine();
string input2 = Console.ReadLine();

PrintOddNumbersBetween(input1, input2);
