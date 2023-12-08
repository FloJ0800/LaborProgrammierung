#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/*
int i = 0;
int main() {
    while (i < 20){
        i++;
        printf("%d\n", i*i);
    }
}
*/

/*
int i = 0;
int main() {
    do{
        i++;
        printf("%d\n", i*i);
    }while (i < 20);
}
*/

/*
int main() {
    for(int i=1; i <= 20; i++){
        printf("%d\n", i*i);
    }
}
*/

/*
int main(){
    int versuche = 1;
    int eingabe;
    srand(time(NULL));
    int r = rand() % 101;

    for(versuche;versuche < 10;versuche++) {
        printf("Geben Sie eine Zahl ein:\n");
        scanf("%d", &eingabe);

        if (eingabe == r) {
            printf("Sie haben gewonnen");
            break;
        } else if (eingabe < r) {
            printf("Ihre geratene Zahl ist zu klein!\n");
        } else if (eingabe > r) {
            printf("Ihre geratene Zahl ist zu gross!\n");
        }
    }
    printf("Sie haben %d Versuche gebraucht.", versuche);
}
*/

/*
int main(){
    int monat = 0;
    printf("Geben Sie die Monatszahl ein!\n");
    scanf("%d", &monat);

    switch(monat){
        case 1:
            printf("Der angegebene Monat ist Januar.");
            break;
        case 2:
            printf("Der angegebene Monat ist Februar.");
            break;
        case 3:
            printf("Der angegebene Monat ist März.");
            break;
        case 4:
            printf("Der angegebene Monat ist April.");
            break;
        case 5:
            printf("Der angegebene Monat ist Mai.");
            break;
        case 6:
            printf("Der angegebene Monat ist Juni.");
            break;
        case 7:
            printf("Der angegebene Monat ist Juli.");
            break;
        case 8:
            printf("Der angegebene Monat ist August.");
            break;
        case 9:
            printf("Der angegebene Monat ist September.");
            break;
        case 0:
            printf("Der angegebene Monat ist Oktober.");
            break;
        case 11:
            printf("Der angegebene Monat ist November.");
            break;
        case 12:
            printf("Der angegebene Monat ist Dezember.");
            break;
        default:
            printf("Deiner Zahl konnte kein Monat zugeordnet werden.");
    }
}
*/

/*
int main(){
    int jahr = 0;
    printf("Geben Sie ein Jahr an:\n");
    scanf("%d", &jahr);

    if (jahr % 4 ==0){
        printf("Das Jahr %d ist ein Schaltjahr", jahr);
    }
    else {
        printf("Das Jahr %d ist kein Schaltjahr", jahr);
    }
}
*/

/*
int main() {
    char user;
    printf("Geben Sie einen Buchstaben ein:\n");
    scanf("%c", &user);
    if (user == 'a' || user == 'e' || user == 'i' || user == 'o' || user == 'u'){
        printf("Der Buchstabe %c ist ein Vokal", user);
    }
    else {
        printf("Der Buchstabe %c ist ein Konsonant", user);
    }
}
*/

/*
int main(){
    int x;
    int y;
    printf("Geben Sie die x-Koordinate ein:\n");
    scanf("%d", &x);
    printf("Geben Sie die y-Koordinate ein:\n");
    scanf("%d", &y);

    if (x > 0 && y > 0){
        printf("Die Koordinaten (%d,%d) liegen im Quadranten I.\n", x,y);
    }
    else if (x < 0 && y > 0){
        printf("Die Koordinaten (%d,%d) liegen im Quadranten II.\n", x,y);
    }
    else if (x < 0 && y < 0){
        printf("Die Koordinaten (%d,%d) liegen im Quadranten III.\n", x,y);
    }
    else if (x > 0 && y < 0){
        printf("Die Koordinaten (%d,%d) liegen im Quadranten IV.\n", x,y);
    }
    else {
        printf("Die Koordinaten (%d,%d) liegen auf einer Achse.", x,y);
    }
}
*/

/*
int main() {
    char wort[20];
    char rueckw[20];
    printf("Geben Sie Ihr Wort ein:\n");
    scanf("%s", wort);

    strcpy(rueckw, wort);
    strrev(rueckw);

    if (strcmp(wort, rueckw) < 0){
        printf("Das Wort %s ist kein Palindrom\n", wort);
    }
    else if (strcmp(wort, rueckw) > 0){
        printf("Das Wort %s ist kein Palindrom\n", wort);
    }
    else {
        printf("Das Wort %s ist ein Palindrom\n", wort);
    }
}
*/