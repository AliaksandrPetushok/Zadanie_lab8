#include <stdio.h>


int linearSearch(int TAB[], int N, int n) {
    int index = 0;
    int wynik = 0; 

    while (index < N) {
        if (TAB[index] == n) {
            wynik = 1; 
            break;     
        }
        index = index + 1;
    }

    return wynik;
}

int main() {
    int TAB[] = {2, 4, 6, 8, 10};
    int N = sizeof(TAB) / sizeof(TAB[0]);
    int n;

    printf("Podaj liczbe do wyszukania: ");
    scanf("%d", &n);

    int wynik = linearSearch(TAB, N, n);

    if (wynik) {
        printf("True - Liczba znajduje sie w tablicy.\n");
    } else {
        printf("False - Liczba nie znajduje sie w tablicy.\n");
    }

    return 0;
}

