#include <stdio.h>  // Instrukcja preprocesora - dołączamy plik nagłówkowy stdio.h, który zawiera funkcje wejścia/wyjścia

// Deklaracja funkcji
void przywitaj();  // Funkcja bezargumentowa
int dodaj(int a, int b);  // Funkcja zwracająca wartość
int silnia(int n);  // Funkcja rekurencyjna

int main() {  // Główna funkcja programu
    // Wywołanie funkcji przywitaj
    przywitaj();

    // Wywołanie funkcji dodaj i wyświetlenie wyniku
    int suma = dodaj(5, 3);
    printf("Suma: %d\n", suma);

    // Wywołanie funkcji silnia i wyświetlenie wyniku
    int n = 5;
    int wynik_silnia = silnia(n);
    printf("Silnia z %d: %d\n", n, wynik_silnia);

    return 0;  // Zakończenie programu
}

// Definicja funkcji przywitaj
void przywitaj() {
    printf("Witaj!\n");
}

// Definicja funkcji dodaj
int dodaj(int a, int b) {
    return a + b;
}

// Definicja funkcji silnia
int silnia(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * silnia(n - 1);
    }
}