#include <stdio.h>
#include <string.h>

void palindrom(char *wort){
    char rueckw[20];
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