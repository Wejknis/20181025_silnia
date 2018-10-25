#include <stdio.h>

    int licz_silnie(int podstawa) {
    if (podstawa == 0) {
        return 1;
    } else {
    int licznik;
        int silnia=1;

        for (licznik = 1; licznik <= podstawa; licznik++7) {
            silnia =silnia * licznik;
        }
        return silnia;
    }
}

int main () {
    int wynik;
int podstawa;

    printf("Podaj podstawę silni w przedziale od 0 do 15: \n");
    scanf("%d", &podstawa);

        if (podstawa > 0 && podstawa <= 15) {
            wynik = licz_silnie(podstawa);
            printf("silnia: %d", wynik);
        }
            else{
                printf("podałeś wartość spoza zakresu!");
        }
    return 0;
}