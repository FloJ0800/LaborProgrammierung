#include <stdio.h>

//Aufgabe 1

/*
void numberToLetters(int number) {
    char letters[50]; // Annahme: Die Buchstabenkombination überschreitet nicht 50 Zeichen
    int index = 0;

    while (number > 0) {
        int remainder = (number - 1) % 26;
        letters[index] = 'A' + remainder;
        number = (number - 1) / 26;
        index++;
    }
    letters[index] = '\0';

    // Umkehren und Ausgabe der Buchstabenkombination
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", letters[i]);
    }
}

int main() {
    int number = 28; // Beispielzahl
    numberToLetters(number); // Diese Funktion gibt "AAA" aus
    return 0;
}
*/

//Aufgabe 2

#include <string.h>

char findMostFrequentChar(const char *str) {
    int charCount[256] = {0}; // Annahme: ASCII-Zeichen

    // Zähle die Vorkommen jedes Zeichens im String
    for (int i = 0; str[i] != '\0'; i++) {
        charCount[(int)str[i]]++;
    }

    char mostFrequentChar = '\0';
    int maxCount = 0;

    // Finde das Zeichen mit den meisten Vorkommen
    for (int i = 0; i < 256; i++) {
        if (charCount[i] > maxCount) {
            maxCount = charCount[i];
            mostFrequentChar = (char)i;
        }
    }

    return mostFrequentChar;
}

int main() {
    const char *inputString = "Hallo, Welt!";
    char result = findMostFrequentChar(inputString);

    printf("Das Zeichen mit den meisten Vorkommen ist: %c\n", result);

    return 0;
}