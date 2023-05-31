using System;

class Program
{
    static void Main(string[] args)
    {
        try
        {
            int dzielna = 10;
            int dzielnik = 0;

            int wynik = dzielna / dzielnik;

            Console.WriteLine("Wynik: " + wynik);
        }
        catch (DivideByZeroException ex)
        {
            Console.WriteLine("Błąd: Dzielenie przez zero");
        }
        catch (Exception ex)
        {
            Console.WriteLine("Błąd: " + ex.Message);
        }
        finally
        {
            Console.WriteLine("To zawsze zostanie wykonane");
        }
    }
}