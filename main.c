#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct students{
    char firstName[20];
    char lastName[20];
    unsigned short gradeMath;
    unsigned short gradeGerman;
    unsigned short gradeEnglish;
    struct students *ptr;
};
struct students *last = NULL;

char firstName[20];
char lastName[20];
int newGrade;
int input;

void add(){
    printf("Type in the first name.\n");
    scanf("%s", firstName);
    printf("Type in the last name\n");
    scanf("%s", lastName);

    struct students *temp = (struct students *) malloc(sizeof(struct students));
    strcpy(temp->firstName, firstName);
    strcpy(temp->lastName, lastName);
    temp->gradeMath = 0;
    temp->gradeGerman = 0;
    temp->gradeEnglish = 0;
    temp->ptr = last;
    last = temp;
}

void changeGrade() {
    printf("Type in the first name.\n");
    scanf("%s", firstName);
    printf("Type in the last name.\n");
    scanf("%s", lastName);

    if(last == NULL){
        printf("The list is empty. Please fill in students first.\n");
        return;
    }

    struct students *curr = last;

    while (strcmp(curr->firstName, firstName) != 0 || strcmp(curr->lastName, lastName) != 0){
        if(curr->ptr == NULL){
            printf("This student does not exist.\n");
            return;
        }
        curr = curr->ptr;
    }

    printf("Do you want to change the grade for maths? 0: No, 1: Yes\n");
    scanf("%d", &input);
    if (input == 1){
        printf("Which grade do you want to give?\n");
        scanf("%d", &newGrade);
        curr->gradeMath = newGrade;
    }
    printf("Do you want to change the grade for german? 0: No, 1: Yes\n");
    scanf("%d", &input);
    if (input == 1){
        printf("Which grade do you want to give?\n");
        scanf("%d", &newGrade);
        curr->gradeGerman = newGrade;
    }
    printf("Do you want to change the grade for english? 0: No, 1: Yes\n");
    scanf("%d", &input);
    if (input == 1){
        printf("Which grade do you want to give?\n");
        scanf("%d", &newGrade);
        curr->gradeEnglish = newGrade;
    }
}

void averageGrade(){
    struct students *curr = last;
    int sumGrade = 0;
    int count = 0;
    float average;

    printf("Which subject do you want to have the average grade from? 1: Maths, 2: German, 3: English\n");
    scanf("%d", &input);

    switch(input){
        case 1:
            while(curr != NULL){
                if(curr->gradeMath != 0){
                    sumGrade = sumGrade + curr->gradeMath;
                    count++;
                }
                curr = curr->ptr;
            }
            average = sumGrade/count;
            printf("The average grade in maths is: %f\n", average);
            return;
        case 2:
            while(curr != NULL){
                if(curr->gradeGerman != 0){
                    sumGrade = sumGrade + curr->gradeGerman;
                    count++;
                }
                curr = curr->ptr;
            }
            average = sumGrade/count;
            printf("The average grade in german is: %f\n", average);
            return;
        case 3:
            while(curr != NULL){
                if(curr->gradeEnglish != 0){
                    sumGrade = sumGrade + curr->gradeEnglish;
                    count++;
                }
                curr = curr->ptr;
            }
            average = sumGrade/count;
            printf("The average grade in english is: %f\n", average);
            return;
        default:
            printf("Wrong input!\n");
            break;
    }
}

int main() {
    while (1) {
        printf("What do you want to do?\n");
        printf("1: Insert students, 2: Change grades, 3: Average grades, 4: Close program\n");
        scanf("%d", &input);

        switch (input) {
            case 1:
                add();
                break;
            case 2:
                changeGrade();
                break;
            case 3:
                averageGrade();
                break;
            case 4:
                return 0;
            default:
                printf("Wrong input!\n");
                break;
        }
    }
}
