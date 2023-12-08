#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "palilib/library.h"
#include <math.h>

/*
int main()
{
    char wort[20];
    printf("Geben Sie Ihr Wort ein:\n");
    scanf("%s", wort);

    palindrom(&wort);

}
*/

/*
int main() {
    struct SortedList *sortedList = initSortedList();
    srand(time(0));
    int selection;
    do {
        printf("0 - Programm beenden\n");
        printf("1 - Wert hinzufuegen\n");
        printf("2 - Wert ausgeben\n");
        printf("3 - Wert ausgeben und entfernen\n");
        printf("4 - Pruefen, ob der Stapel leer ist\n");
        printf("5 - Groesse auslesen\n");
        printf("6 - Test\n");
        printf("Befehl: ");
        scanf("%d", &selection);
        int n = 0;
        switch (selection) {
            case 0:
                deleteSortedList(sortedList);
                return 0;
            case 1:
                printf("Wert: ");
                scanf("%d", &n);
                add(sortedList, n);
                break;
            case 2:
                printf("Position: ");
                scanf("%d", &n);
                n = get(sortedList, n);
                if (n == -1) {
                    printf("Liste ist leer.");
                } else {
                    printf("Wert: %d\n", n);
                }
                break;
            case 3:
                printf("Position: ");
                scanf("%d", &n);
                n = delete(sortedList, n);
                if (n == -1) {
                    printf("Liste ist leer.");
                } else {
                    printf("Wert: %d\n", n);
                    printf("Wert wurde entfernt!\n");
                }
                break;
            case 4:
                printf(isEmpty(sortedList) ? "Liste ist leer\n" : "Liste ist nicht leer\n");
                break;
            case 5:
                printf("Groesse: %d\n", size(sortedList));
                break;
            case 6:
                deleteSortedList(sortedList);
                sortedList = initSortedList();
                for (int i = 0; i < 1000; i++)
                    add(sortedList, (rand() % 1000) + 1);
                for (int i = 0; i < 1000; i++)
                    printf("%d\n", get(sortedList, i));
                deleteSortedList(sortedList);
                sortedList = initSortedList();
                break;
            default:
                printf("Ungueltiger Befehl!\n");
        }
        printf("----------------\n");
    } while (selection);
    return 0;
}
*/

int main()
{
    int selection;
    do
    {
        printf("0 - Quader\n");
        printf("1 - Quadratische Pyramide\n");
        printf("2 - Kugel\n");
        printf("3 - Kegel\n");

        double quadratseite;
        double radius;
        double höhe;


        switch (selection)
        {
            case 0:
                printf("Seitenlänge des Quadrats: ");
                scanf("%d\n", &quadratseite);
                printf("Der Flächeninhalt des Quadrats ist: %f\n", quadratseite*quadratseite);
                printf("Die Gesamtfläche des Quaders ist: %f\n", 6*quadratseite*quadratseite);
                printf("Das Volumen des Quaders ist: %f\n", quadratseite*quadratseite*quadratseite);
            case 1:
                printf("Seitenlänge des Quadrats: ");
                scanf("%d\n", &quadratseite);
                printf("Höhe der Pyramide: ");
                scanf("%d\n", &höhe);
                double flaecheninhalt = (quadratseite * (sqrt((quadratseite/2)*(quadratseite/2)+höhe*höhe)))/2;
                printf("Der Flächeninhalt des Quadrats ist: %f\n", quadratseite*quadratseite);
                printf("Der Flächeninhalt eines Dreiecks ist: %f\n", flaecheninhalt);
                printf("Der Flächeninhalt der Pyramide ist ist: %f\n", 4 * flaecheninhalt + quadratseite*quadratseite);
            case 2:
                printf("Radius der Kugel: ");
                scanf("%d\n", &radius);
                printf("Der Flächeninhalt der Kugel ist: %f\n", 4 * M_PI * radius * radius);
                printf("Das Volumen der Kugel ist: %f\n", (4/3) * M_PI * radius * radius * radius);
            case 3:

        }
        printf("--------------------\n");
    }while(selection);
    return 0;
}