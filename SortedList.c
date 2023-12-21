#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct list 
{
    int data;
    struct list *ptr;
};
struct list *top = NULL;

//kleinstes ist top, größtes zeigt auf NULL
void Add(int data) 
{
    struct list *temp = (struct list *)malloc(sizeof(struct list));
    temp->ptr = NULL;
    temp->data = data;

    if (top == NULL) 
    {
        top = temp;
        return;
    }

    if (data <= top->data) 
    {
        temp->ptr = top;
        top = temp;
        return;
    }

    struct list *now = top;
    struct list *pre = NULL;

    while (now != NULL && data > now->data) 
    {
        pre = now;
        now = now->ptr;
    }

    temp->ptr = now;

    if (pre != NULL) 
    {
        pre->ptr = temp;
    } 
    else 
    {
        top = temp;
    }
}

int Size(){
    if (top == NULL){
        return 0;
    }
    else {
        struct list *count = top;
        int counter = 0;

        while (count->ptr != NULL) {
            counter += 1;
            count = count->ptr;
        }
        return counter;
    }
}

int Get(int stelle){
    int wieoft = Size() - stelle;
    int counter = 1;
    struct list *count = top;
    int data;
    for(counter = 1;counter<=wieoft;counter++){
        count = count->ptr;
        data = count->data;
    }
    return data;
}

int IsEmpty(){
    if (top == NULL){
        return 1;
    }
    else {
        return 0;
    }
}


void printList() {
    printf("\nListe: ");
    struct list *currentTop = top;
    while (currentTop != NULL) {
        printf("%d ", currentTop->data);  // Direkt printen ohne die variable
        currentTop = currentTop->ptr;
    }
    printf("\n");
}


int main(){
    srand(time(NULL));


    for (int i = 0; i <= 5000; i++) {
        int zufallszahl = rand() % 10000 + 1;
        Add(zufallszahl);
    }
    printList();
}