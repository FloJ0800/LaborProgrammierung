#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct SortedList {
    struct SortedListItem *first;
};

struct SortedListItem {
    int data;
    struct SortedListItem *next;
};

struct SortedList* initSortedList() {
    struct SortedList *sortedList = (struct SortedList *)
            malloc(sizeof(struct SortedList));
    sortedList->first = NULL;
    return sortedList;
}

void add(struct SortedList *sortedList, int data) {
    struct SortedListItem *prevItemPtr = NULL;
    struct SortedListItem *nextItemPtr = sortedList->first;
    while (nextItemPtr != NULL && nextItemPtr->data <= data) {
        prevItemPtr = nextItemPtr;
        nextItemPtr = nextItemPtr->next;
    }
    struct SortedListItem *new = (struct SortedListItem *)
            malloc(sizeof(struct SortedListItem));
    new->data = data;
    if (prevItemPtr == NULL) {
        sortedList->first = new;
    } else {
        prevItemPtr->next = new;
    }
    new->next = nextItemPtr;
}

int get(struct SortedList *sortedList, int pos) {
    struct SortedListItem *itemPtr = sortedList->first;
    int ptrPos = 0;
    while (itemPtr != NULL && ptrPos < pos) {
        ptrPos++;
        itemPtr = itemPtr->next;
    }
    if (itemPtr == NULL)
        return -1;
    return itemPtr->data;
}

int delete(struct SortedList *sortedList, int pos) {
    struct SortedListItem *prevItemPtr = NULL;
    struct SortedListItem *itemPtr = sortedList->first;
    int ptrPos = 0;
    while (itemPtr != NULL && ptrPos < pos) {
        ptrPos++;
        prevItemPtr = itemPtr;
        itemPtr = itemPtr->next;
    }
    if (itemPtr == NULL)
        return -1;
    int data = itemPtr->data;
    if (prevItemPtr == NULL) {
        sortedList->first = itemPtr->next;
    } else {
        prevItemPtr->next = itemPtr->next;
    }
    free(itemPtr);
    return data;
}

int isEmpty(struct SortedList *sortedList) {
    return sortedList->first == NULL;
}

int size(struct SortedList *sortedList) {
    struct SortedListItem *itemPtr = sortedList->first;
    int size = 0;
    while (itemPtr != NULL) {
        size++;
        itemPtr = itemPtr->next;
    }
    return size;
}

void deleteSortedList(struct SortedList *sortedList) {
    while (!isEmpty(sortedList))
        delete(sortedList, 0);
    free(sortedList);
}