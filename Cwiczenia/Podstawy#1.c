#include <stdio.h>  // Instrukcja preprocesora - dołączamy plik nagłówkowy stdio.h, który zawiera funkcje wejścia/wyjścia

int main() {  // Główna funkcja programu
    // Zmienna do przechowywania imienia
    char imie[20];

    // Zapytanie o imię i wczytanie go od użytkownika
    printf("Podaj swoje imie: ");
    scanf("%s", imie);

    // Wyświetlenie powitania z imieniem użytkownika
    printf("Witaj, %s!\n", imie);

    // Zmienna do przechowywania wieku
    int wiek;

    // Zapytanie o wiek i wczytanie go od użytkownika
    printf("Podaj swoj wiek: ");
    scanf("%d", &wiek);

    // Sprawdzenie, czy użytkownik jest pełnoletni
    if (wiek >= 18) {
        printf("Jestes pelnoletni!\n");
    } else {
        printf("Nie jestes pelnoletni.\n");
    }

    return 0;  // Zakończenie programu
}