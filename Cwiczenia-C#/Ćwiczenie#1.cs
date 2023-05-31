using System;

class Program
{
    // Przykład funkcji
    static void Main(string[] args)
    {
        // Proste wyjście na konsolę
        Console.WriteLine("Witaj!");

        // Deklaracja i inicjalizacja zmiennej
        int liczba = 10;

        // Wywołanie metody
        Metoda(liczba);

        // Instrukcje warunkowe
        if (liczba > 5)
        {
            Console.WriteLine("Liczba jest większa od 5.");
        }
        else
        {
            Console.WriteLine("Liczba jest mniejsza lub równa 5.");
        }

        // Pętla for
        for (int i = 0; i < 5; i++)
        {
            Console.WriteLine("Iteracja: " + i);
        }

        // Pętla while
        int j = 0;
        while (j < 3)
        {
            Console.WriteLine("Pętla while, iteracja: " + j);
            j++;
        }

        // Tablica
        int[] tablica = new int[] { 1, 2, 3, 4, 5 };

        // Iteracja po tablicy
        foreach (int element in tablica)
        {
            Console.WriteLine("Element tablicy: " + element);
        }

        // Klasa
        Osoba osoba = new Osoba("Jan", "Kowalski");
        Console.WriteLine("Imię: " + osoba.Imie);
        Console.WriteLine("Nazwisko: " + osoba.Nazwisko);
    }

    // Przykład metody
    static void Metoda(int liczba)
    {
        Console.WriteLine("Przekazana liczba: " + liczba);
    }

    // Przykład klasy
    class Osoba
    {
        public string Imie { get; set; }
        public string Nazwisko { get; set; }

        public Osoba(string imie, string nazwisko)
        {
            Imie = imie;
            Nazwisko = nazwisko;
        }
    }
}