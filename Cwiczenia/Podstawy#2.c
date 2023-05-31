#include <stdio.h>  // Instrukcja preprocesora - dołączamy plik nagłówkowy stdio.h, który zawiera funkcje wejścia/wyjścia

int main() {  // Główna funkcja programu
    // Zmienna do przechowywania liczby
    int liczba;

    // Zapytanie o liczbę i wczytanie jej od użytkownika
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    // Podwojenie wartości liczby
    int podwojona = liczba * 2;

    // Wyświetlenie wyniku
    printf("Podwojona wartosc liczby: %d\n", podwojona);

    return 0;  // Zakończenie programu
}