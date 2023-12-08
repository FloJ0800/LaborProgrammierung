#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <math.h>

/*
const int piint = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912l;
const double pidouble = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;
const float pifloat = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;
int64_t pilonglong = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;


int main() {
    printf("%d, %d, %d, %d", piint, pidouble, pifloat, pilonglong);
    return 0;
}
*/

/*
int a = 1000000000;
int b = 2000000000;

int main() {
    printf("%d", a+b);
    return 0;
}
*/

/*
int zahl;

int main() {
    printf("Geben Sie Ihre Zahl ein!\n");
    scanf("%d", &zahl );
    if (zahl % 2 == 1) {
        printf("Die Zahl ist ungerade.");
    } else {
        printf("Die Zahl ist gerade.");
    }
}
*/

/*
int zahl;

int main() {
    printf("Geben Sie Ihre Zahl ein!\n");
    scanf("%d", &zahl);

    if(zahl == 0 || zahl == 1){
        printf("Diese Zahl ist keine Primzahl.");
    }
    else {
        for (int i = 2; i < zahl; i++) {
            int counter = i;
            if (zahl % i == 0) {
                printf("Diese Zahl ist keine Primzahl.");
                break;
            }
        }
        if (counter == zahl - 1) {
            printf("Diese Zahl ist eine Primzahl.");
        }
    }
}
*/


int main()
{
    int array[4]; //Array für Koordinaten
    printf("Geben Sie die x-Koordinate des ersten Punktes ein!\n");
    scanf("%d", &array[0]); //x1 an 0. Stelle
    printf("Geben Sie die y-Koordinate des ersten Punktes ein!\n");
    scanf("%d", &array[1]); //y1 an 1. Stelle
    printf("Geben Sie die x-Koordinate des zweiten Punktes ein!\n");
    scanf("%d", &array[2]); //x2 an 2. Stelle
    printf("Geben Sie die y-Koordinate des zweiten Punktes ein!\n");
    scanf("%d", &array[3]); //y2 an 3. Stelle

    //Pythagoras für Berechnung des Abstands
    double d = sqrt((array[2]-array[0])*(array[2]-array[0])+(array[3]-array[1])*(array[3]-array[1]));
    printf("Der Abstand der beiden Punkte ist %fkm\n", d);

    //Fahrzeugwahl
    int fahrzeug;
    printf("Waehlen Sie aus den folgenden Verkehrsmitteln aus!\n");
    printf("1: Fuss, 2: Fahrrad, 3: Auto\n");
    scanf("%d", &fahrzeug);

    //Geschwindigkeit zu Fuß ca. 5 km/h
    if(fahrzeug == 1)
    {
        float fahrtzeit = (d/5)*60; //*60 für Minuten
        printf("Sie werden ungefaehr %f minuten unterwegs sein\n", fahrtzeit);
    }
        //Geschwindigkeit zu Fuß ca. 15 km/h
    else if(fahrzeug == 2)
    {
        float fahrtzeit = (d/15)*60; //*60 für Minuten
        printf("Sie werden ungefaehr %f minuten unterwegs sein\n", fahrtzeit);
    }
        //Geschwindigkeit zu Fuß ca. 50 km/h
    else if(fahrzeug == 3)
    {
        float fahrtzeit = (d/50)*60; //*60 für Minuten
        printf("Sie werden ungefaehr %f minuten unterwegs sein\n", fahrtzeit);
    }
    else
    {
        printf("Die Eingabe war falsch!\n"); // Falls kein gültiges Fahrzeug
    }
}


/*
int main(){
    int i=0, k=0, total_x=12, total_y=12;

    for(k=1; k <= total_y; k++){
        if(k==1){
            printf("%3c | ",'*');

            int temp;
            for (temp = 1; temp <=  total_x; temp++) {
                printf("%4d", temp);
            }
            printf("\n");
            for (temp = 1; temp <  total_x*5; temp++) {
                if (temp == 5) {
                    printf("+");
                }
                printf("-");
            }
            printf("\n");
        }

        printf("%3d | ",k);

        for (i = 1;  i <= total_x; i++) {
            printf("%4d", k * i);
        }
        printf("\n");
    }

}
*/

/*
int main(){


    struct Acc char array[5];
    array[0].acc = 0 ;
    array[0].pw = 0;
    array[1].acc = 0 ;
    array[1].pw = 0;
    array[2].acc = 0 ;
    array[2].pw = 0;
    array[3].acc = 0 ;
    array[3].pw = 0;
    array[4].acc = 0 ;
    array[4].pw = 0;
    printf("Geben Sie den Benutzernamen des ersten Accounts ein!\n");
    scanf("%d", &array[0].acc);

    printf("%c", array[0].acc[0]);
}
 */