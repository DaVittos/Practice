#include <stdio.h>  // Instrukcja preprocesora - dołączamy plik nagłówkowy stdio.h, który zawiera funkcje wejścia/wyjścia
#include <math.h>   // Instrukcja preprocesora - dołączamy plik nagłówkowy math.h, który zawiera funkcje matematyczne

int main() {  // Główna funkcja programu

    // Tablice
    int tablica[5];  // Deklaracja tablicy całkowitej
    tablica[0] = 1;  // Przypisanie wartości do pierwszego elementu tablicy

    // Pętla do-while
    int i = 0;
    do {
        printf("Wartość i: %d\n", i);
        i++;
    } while (i < 3);

    // Funkcje matematyczne
    int x = 4;
    int y = 2;
    int suma = add(x, y);  // Wywołanie funkcji add
    int roznica = subtract(x, y);  // Wywołanie funkcji subtract
    double pierwiastek = sqrt(x);  // Wywołanie funkcji sqrt

    // Funkcje użytkownika
    int wynik = pomnoz(3, 4);  // Wywołanie funkcji pomnoz

    return 0;  // Zakończenie programu
}

// Deklaracja funkcji add
int add(int a, int b) {
    return a + b;
}

// Deklaracja funkcji subtract
int subtract(int a, int b) {
    return a - b;
}

// Deklaracja funkcji pomnoz
int pomnoz(int a, int b) {
    return a * b;
}