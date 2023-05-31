using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        bool exit = false;
        List<Person> people = new List<Person>();

        while (!exit)
        {
            Console.WriteLine("Wybierz opcję:");
            Console.WriteLine("1. Dodaj");
            Console.WriteLine("2. Szukaj");
            Console.WriteLine("3. Wyświetl wszystkie");
            Console.WriteLine("4. Usuń");
            Console.WriteLine("5. Wyjdź");

            string input = Console.ReadLine();

            switch (input)
            {
                case "1":
                    Console.WriteLine("Wybrano opcję: Dodaj");

                    Console.WriteLine("Podaj imię:");
                    string firstName = Console.ReadLine();

                    Console.WriteLine("Podaj nazwisko:");
                    string lastName = Console.ReadLine();

                    Console.WriteLine("Podaj wiek:");
                    int age = Convert.ToInt32(Console.ReadLine());

                    Person person = new Person(firstName, lastName, age);
                    people.Add(person);

                    Console.WriteLine("Osoba została dodana.");

                    break;
                case "2":
                    Console.WriteLine("Wybrano opcję: Szukaj");

                    Console.WriteLine("Wybierz kryterium wyszukiwania:");
                    Console.WriteLine("1. Imię");
                    Console.WriteLine("2. Nazwisko");

                    string searchOption = Console.ReadLine();

                    if (searchOption == "1")
                    {
                        Console.WriteLine("Podaj imię do wyszukania:");
                        string searchFirstName = Console.ReadLine();

                        var searchResults = people.FindAll(p => p.FirstName.Equals(searchFirstName, StringComparison.OrdinalIgnoreCase));

                        if (searchResults.Count > 0)
                        {
                            Console.WriteLine("Znalezione osoby:");
                            foreach (var result in searchResults)
                            {
                                Console.WriteLine($"Imię: {result.FirstName}, Nazwisko: {result.LastName}, Wiek: {result.Age}");
                            }
                        }
                        else
                        {
                            Console.WriteLine("Nie znaleziono osób o podanym imieniu.");
                        }
                    }
                    else if (searchOption == "2")
                    {
                        Console.WriteLine("Podaj nazwisko do wyszukania:");
                        string searchLastName = Console.ReadLine();

                        var searchResults = people.FindAll(p => p.LastName.Equals(searchLastName, StringComparison.OrdinalIgnoreCase));

                        if (searchResults.Count > 0)
                        {
                            Console.WriteLine("Znalezione osoby:");
                            foreach (var result in searchResults)
                            {
                                Console.WriteLine($"Imię: {result.FirstName}, Nazwisko: {result.LastName}, Wiek: {result.Age}");
                            }
                        }
                        else
                        {
                            Console.WriteLine("Nie znaleziono osób o podanym nazwisku.");
                        }
                    }
                    else
                    {
                        Console.WriteLine("Nieprawidłowy wybór. Wybierz ponownie.");
                    }

                    break;
                case "3":
                    Console.WriteLine("Wybrano opcję: Wyświetl wszystkie");
                    Console.WriteLine("Lista wszystkich osób:");

                    for (int i = 0; i < people.Count; i++)
                    {
                        Console.WriteLine($"{i + 1}. Imię: {people[i].FirstName}, Nazwisko: {people[i].LastName}, Wiek: {people[i].Age}");
                    }

                    break;
                case "4":
                    Console.WriteLine("Wybrano opcję: Usuń");
                    Console.WriteLine("Podaj numer osoby do usunięcia:");
                    int indexToRemove = Convert.ToInt32(Console.ReadLine()) - 1;

                    if (indexToRemove >= 0 && indexToRemove < people.Count)
                    {
                        people.RemoveAt(indexToRemove);
                        Console.WriteLine("Osoba została usunięta.");
                    }
                    else
                    {
                        Console.WriteLine("Nieprawidłowy numer osoby.");
                    }

                    break;
                case "5":
                    Console.WriteLine("Wybrano opcję: Wyjdź");
                    exit = true;
                    break;
                default:
                    Console.WriteLine("Nieprawidłowy wybór. Wybierz ponownie.");
                    break;
            }

            Console.WriteLine();
        }
    }
}

class Person
{
    public string FirstName { get; set; }
    public string LastName { get; set; }
    public int Age { get; set; }

    public Person(string firstName, string lastName, int age)
    {
        FirstName = firstName;
        LastName = lastName;
        Age = age;
    }
}