#include <stdio.h>
#include <time.h>
#include <math.h>

/*
int groesserprint(int a, int b){
    if(a > b){
        printf("%d ist die groessere Zahl!", a);
    }
    else if(b > a){
        printf("%d ist die groessere Zahl!", b);
    }
    else{
        printf("Beide Zahlen sind gleichgroß");
    }
}

int a;
int b;

int main() {
    printf("Geben Sie zwei Zahlen an!\n");
    scanf("%d", &a);
    scanf("%d", &b);
    groesserprint(a,b);
}
*/

/*
int groesserreturn(int a, int b){
    if(a > b){
        return a;
    }
    else if(b > a){
        return b;
    }
    else{
        return a;
    }
}

int a;
int b;

int main(){
    printf("Geben Sie zwei Zahlen an!\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", groesserreturn(a,b));
}
*/

/*
int zahl;
int temp = 1;

int fakiter(zahl){
    if(zahl == 0 || zahl == 1){
        return 1;
    }
    else{
        for(int i = 1 ; i <= zahl ; i++){
            temp = i * temp;
        }
        return temp;
    }
}

int fakrek(zahl){
    if(zahl == 0 || zahl == 1){
        return 1;
    }
    return (zahl * fakrek(zahl-1));
}

int main(){
    printf("Geben Sie Ihre Zahl an!\n");
    scanf("%d", &zahl);

    clock_t start_time_iter = clock();
    printf("Iterativ: %d\n", fakiter(zahl));
    clock_t end_time_iter = clock();
    double inter_time = ((double)(end_time_iter - start_time_iter));
    printf("Die iterative Funktion hat %f Sekunden gebraucht.\n", inter_time);

    clock_t start_time_rek = clock();
    printf("Rekursiv: %d\n", fakrek(zahl));
    clock_t end_time_rek = clock();
    double rek_time = ((double)(end_time_rek - start_time_rek));
    printf("Die rekursive Funktion hat %f Sekunden gebraucht.", rek_time);
}
*/

/*
int array[4];
double abstand(int x1, int y1, int x2, int y20){
    double d = sqrt((array[2]-array[0])*(array[2]-array[0])+(array[3]-array[1])*(array[3]-array[1]));
    return d;
}

float zeitfuss(double d){
    float zeitfuss = (d/5)*60;
    return zeitfuss;
}

float zeitfahrrad(double d){
    float zeitfahrrad = (d/15)*60;
    return zeitfahrrad;
}

float zeitauto(double d){
    float zeitauto = (d/50)*60;
    return zeitauto;
}

int main() {
    printf("Geben Sie die x-Koordinate des ersten Punktes ein!\n");
    scanf("%d", &array[0]);
    printf("Geben Sie die y-Koordinate des ersten Punktes ein!\n");
    scanf("%d", &array[1]);
    printf("Geben Sie die x-Koordinate des zweiten Punktes ein!\n");
    scanf("%d", &array[2]);
    printf("Geben Sie die y-Koordinate des zweiten Punktes ein!\n");
    scanf("%d", &array[3]);

    printf("Der Abstand der beiden Punkte ist %fkm\n", abstand(array[0], array[1], array[2], array[3]));
    double d = abstand(array[0], array[1], array[2], array[3]);

    int fahrzeug;
    printf("Waehlen Sie aus den folgenden Verkehrsmitteln aus!\n");
    printf("1: Fuss, 2: Fahrrad, 3: Auto\n");
    scanf("%d", &fahrzeug);

    if(fahrzeug == 1) {
        printf("Sie werden ungefaehr %f minuten unterwegs sein\n", zeitfuss(d));
    }
    else if(fahrzeug == 2){
        printf("Sie werden ungefaehr %f minuten unterwegs sein\n", zeitfahrrad(d));
    }
    else if(fahrzeug == 3){
        printf("Sie werden ungefaehr %f minuten unterwegs sein\n", zeitauto(d));
    }
    else{
        printf("Die Eingabe war falsch!\n");
    }
}
*/