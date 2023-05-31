using System;

class Osoba
{
    public string Imie { get; set; }
    public string Nazwisko { get; set; }

    public Osoba(string imie, string nazwisko)
    {
        Imie = imie;
        Nazwisko = nazwisko;
    }

    public virtual void PrzedstawSie()
    {
        Console.WriteLine("Jestem " + Imie + " " + Nazwisko);
    }
}

class Pracownik : Osoba
{
    public string Stanowisko { get; set; }

    public Pracownik(string imie, string nazwisko, string stanowisko)
        : base(imie, nazwisko)
    {
        Stanowisko = stanowisko;
    }

    public override void PrzedstawSie()
    {
        Console.WriteLine("Jestem " + Imie + " " + Nazwisko + ", pracuję na stanowisku " + Stanowisko);
    }
}

class Program
{
    static void Main(string[] args)
    {
        Osoba osoba = new Osoba("Jan", "Kowalski");
        osoba.PrzedstawSie();

        Pracownik pracownik = new Pracownik("Anna", "Nowak", "Inżynier");
        pracownik.PrzedstawSie();
    }
}