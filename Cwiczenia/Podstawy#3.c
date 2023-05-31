#include <stdio.h>  // Instrukcja preprocesora - dołączamy plik nagłówkowy stdio.h, który zawiera funkcje wejścia/wyjścia

int main() {  // Główna funkcja programu

    // Wyświetlanie tekstu na ekranie
    printf("Witaj świecie!\n");

    // Zmienne
    int liczba = 10;  // Deklaracja zmiennej typu całkowitego
    float liczba_zmiennoprzecinkowa = 3.14;  // Deklaracja zmiennej typu zmiennoprzecinkowego
    char znak = 'A';  // Deklaracja zmiennej typu znakowego

    // Operatory arytmetyczne
    int suma = liczba + 5;  // Dodawanie
    int roznica = liczba - 2;  // Odejmowanie
    int iloczyn = liczba * 3;  // Mnożenie
    float iloraz = (float) liczba / 2;  // Dzielenie, rzutowanie typu na float

    // Instrukcje warunkowe
    if (liczba > 0) {
        printf("Liczba jest dodatnia\n");
    } else if (liczba < 0) {
        printf("Liczba jest ujemna\n");
    } else {
        printf("Liczba jest równa zero\n");
    }

    // Pętla for
    for (int i = 0; i < 5; i++) {
        printf("Wartość i: %d\n", i);
    }

    // Pętla while
    int j = 0;
    while (j < 5) {
        printf("Wartość j: %d\n", j);
        j++;
    }

    return 0;  // Zakończenie programu
}