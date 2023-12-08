//
// Created by local_8LDVFX3 on 08.12.2023.
//

#ifndef palinndrom_h
#define palinndrom_h

void palindrom(char *wort);

#endif //palinndrom_h

#ifndef listFunctions_h
#define listFunctions_h

struct SortedList;
struct SortedListItem;
struct SortedList* initSortedList();
void add(struct SortedList *sortedList, int data);
int get(struct SortedList *sortedList, int pos);
int delete(struct SortedList *sortedList, int pos);
int isEmpty(struct SortedList *sortedList);
int size(struct SortedList *sortedList);
void deleteSortedList(struct SortedList *sortedList);

#endif //listFunctions_h