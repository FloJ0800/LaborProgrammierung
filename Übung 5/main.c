#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
int main() {
    int integerVar = 42;
    double doubleVar = 3.14;
    char charVar = 'A';

    int *ptrInt = &integerVar;
    double *ptrDouble = &doubleVar;
    char *ptrChar = &charVar;

    printf("Pointer auf integerVar: %p\n", (void *)ptrInt);
    printf("Pointer auf doubleVar: %p\n", (void *)ptrDouble);
    printf("Pointer auf charVar: %p\n", (void *)ptrChar);

    return 0;
}
*/

/*
struct node {
    int data1;
    int data2;
    int data3;
    int data4;
    int data5;
    int data6;
    int data7;
    int data8;
    int data9;
    int data10;
};

void prozstr(struct node temp){
    int str = temp.data10;
}

void prozpoi(struct node *temp){
    int poi = temp->data10;
}


int main(){
    struct timespec start_str, end_str, start_poi, end_poi;
    double elapsed_str, elapsed_poi;

    struct node test;
    test.data10 = 100;

    clock_gettime(CLOCK_MONOTONIC, &start_str);
    for(int i = 1; i <= 10000; i++){
        prozstr(test);
    }
    clock_gettime(CLOCK_MONOTONIC, &end_str);
    elapsed_str = (end_str.tv_sec - start_str.tv_sec) + (end_str.tv_nsec - start_str.tv_nsec) / 1e9;
    printf("Die str-Funktion hat %f Sekunden gebraucht.\n", elapsed_str);

    clock_gettime(CLOCK_MONOTONIC, &start_poi);
    for(int i = 1; i <= 10000; i++){
        prozpoi(&test);
    }
    clock_gettime(CLOCK_MONOTONIC, &end_poi);
    elapsed_poi = (end_poi.tv_sec - start_poi.tv_sec) + (end_poi.tv_nsec - start_poi.tv_nsec) / 1e9;
    printf("Die poi-Funktion hat %f Sekunden gebraucht.\n", elapsed_poi);
}
*/

/*
struct node {
    int data;
    struct node *ptr;
};
struct node *top = NULL;

void Push(int data) {
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->ptr = top; // (*temp).ptr = top;
    temp->data = data; // (*temp).data = data;
    top = temp;
}

int Pop() {
    if (top == NULL)
        return -1;
    struct node *temp = top->ptr; // *temp = (*top).ptr;
    int popped = top->data; // popped = (*top).data;
    free(top);
    top = temp;
    return popped;
}

int Top(){
    if (top == NULL) {
        return -1;
    }
    return top->data;
}

int IsEmpty(){
    if (top == NULL){
        return 1;
    }
    else {
        return 0;
    }
}

int Size(){
    if (top == NULL){
        return 0;
    }
    else {
        struct node *count = top;
        int counter = 0;

        while (count->ptr != NULL) {
            counter += 1;
            count = count->ptr;
        }
        return counter;
    }
}

int main(){

}
*/

struct list {
    int data;
    struct list *ptr;
};
struct list *top = NULL;

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

void Add(int data){
    struct list *temp = (struct list *) malloc(sizeof(struct list));
    temp->ptr = top;
    temp->data = data;
    top = temp;

    struct list *now = top;
    struct list *pre = top->ptr;
    while(now->data < pre->ptr){
        int t = pre->data;
        pre->data = top->data;
        top->data = t;
        now = pre;
        pre = pre->ptr;
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

int main(){
    Add(5);
    printf("%d", top->data);
}