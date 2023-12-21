#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Liste
struct list {
    void* data;
    size_t size;
    struct list *ptr;
};
struct list *top = NULL;


void add(void *input, size_t size) {
    struct list *temp = (struct list *)malloc(sizeof(struct list));
    temp->data = malloc(size);
    memcpy(temp->data, input, size);
    temp->size = size;
    temp->ptr = top;
    top = temp;
}

int contains(void *input) {
    struct list *currentTop = top;
    int i = 0;
    while (currentTop != NULL) {
        i += 1;
        if (currentTop->size == sizeof(int) && *(int*)currentTop->data == *(int*)input) {
            return i;
        } else if (currentTop->size == sizeof(char) && *(char*)currentTop->data == *(char*)input) {
            return i;
        } else if (currentTop->size == sizeof(double) && *(double*)currentTop->data == *(double *)input) {
            return i;
        } else if (currentTop->size == sizeof(double) && strcmp(currentTop->data, input) == 0) {
            return i;
        }
        currentTop = currentTop->ptr;
    }
    return -1;
}

int pop() {
    if (top == NULL) {
        printf("\nDie Liste ist leer!");
        return -1;
    }
    struct list *temp = top->ptr;           // *temp = (*top).ptr;
    int* popped = top->data;              // popped = (*top).data;
    free(top);
    top = temp;
    return *popped;
}

void removePos(int pos) {
    struct list *currentTop = top;
    struct list *prev = NULL;
    int i = 1;

    while (currentTop != NULL && i < pos) {
        prev = currentTop;
        currentTop = currentTop->ptr;
        i++;
    }

    if (currentTop != NULL) {
        if (prev != NULL) {
            prev->ptr = currentTop->ptr;
        } else {
            top = currentTop->ptr;
        }

        free(currentTop);
    }
}


int isEmpty() {
    if (top == NULL) {
        printf("\nDie Liste ist leer!");
        return -1;
    }
    return 0;
}


int size() {
    int count = 0;
    struct list *currentTop = top;
    while (currentTop != NULL) {
        count++;
        currentTop = currentTop->ptr;
    }

    return count;
}

void printList() {
    printf("\nListe: ");
    struct list *currentTop = top;
    while (currentTop != NULL) {
        if (currentTop->size == sizeof(int)) {
            int* print = (int*)currentTop->data;
            printf("%d ", *print);
        } else if (currentTop->size == sizeof(char)) {
            char* print = (char*)currentTop->data;
            printf("%c ", *print);
        } else if (currentTop->size == sizeof(double)) {
            double* print = (double*)currentTop->data;
            printf("%lf ", *print);
        } else {
            char* print = (char*)currentTop->data;
            printf("%s ", print);
        }
        currentTop = currentTop->ptr;
    }
    printf("\n");
}

void freeList() {
    while (top != NULL) {
        struct list *temp = top;
        top = top->ptr;
        free(temp->data);
        free(temp);
    }
    if (top == NULL) {
        printf("\nDer Speicher ist nun frei!");
    }
}

void help() {
    printf("\n\nHilfe: "
           "\n- Mit P (Pop) entfernst du das letzte hinzugefügte Element."
           "\n- Mit G für Get kannst du das Element an der Stelle n verlangen. "
           "\n- Mit # kannst du aus der Schleife raus."
           "\n- Möchtest du ein Element suchen, musst du ? eingeben, um die Position zu bekommen."
           "\n- Wenn du etwas speichern willst nutze diese Buchstaben, um den Datentyp vorher zu bestimmten: Int (I), Char (C), Double (D) oder String (S)."
           "\n- Wenn du überprüfen willst ob sie leer ist nutze L (-1 = leer | 0 ≠ leer)"
           "\n- Möchtest du ein Wert an einer Position n entfernen, gebe R ein!\n");
}


int main() {
    char input;
    int userInt;
    char userChar;
    double userDouble;
    char userString[150];
    int true = 1;
    help();
    while (true) {
        printf("Was möchtest du tun: ");
        scanf(" %c", &input);

        if (input == 'I') {
            printf("Gebe ein Int ein um ihn hinzuzufügen: ");
            scanf("%d", &userInt);
            add(&userInt, sizeof(int));
        } else if (input == 'C') {
            printf("Gebe ein Char ein um ihn hinzuzufügen: ");
            scanf(" %c", &userChar);
            add(&userChar, sizeof(char));
        } else if (input == 'D') {
            printf("Gebe ein Double ein um ihn hinzuzufügen: ");
            scanf("%lf", &userDouble);
            add(&userDouble, sizeof(double));
        } else if (input == 'S') {
            printf("Gebe ein String ein um ihn hinzuzufügen (maximale größe 150!): ");
            scanf("%s", userString);
            add(userString, sizeof(userString));
        } else if (input == '#') {
            true = 0;
        } else if (input == 'P') {
            pop();
        } else if (input == '?') {
            printf("Welcher Datentyp ist das Element nach dem du suchst: ");
            scanf(" %c", &input);
            if (input == 'I') {
                printf("Nach welchem Int willst du suchen?: ");
                scanf("%d", &userInt);
                printf("%d", contains(&userInt));
            } else if (input == 'C') {
                printf("Nach welchem Char willst du suchen?: ");
                scanf(" %c", &userChar);
                printf("%d", contains(&userChar));
            } else if (input == 'D') {
                printf("Nach welchem Double willst du suchen?: ");
                scanf("%lf", &userDouble);
                printf("%d", contains(&userDouble));
            } else if (input == 'S') {
                printf("Nach welchem String willst du suchen (maximale größe 150!)?: ");
                scanf("%s", userString);
                printf("%d", contains(&userString));
            }
        } else if (input == 'R') {
            printf("An welcher Position soll ein Wert entfernt werden (beginnend bei 1)?: ");
            scanf("%d", &userInt);
            removePos(userInt);
        }

        printList();
        printf("Größe der Liste: %d\n", size());
    }

    freeList();
    printf("\n%d\n", isEmpty());



    return 0;
}


