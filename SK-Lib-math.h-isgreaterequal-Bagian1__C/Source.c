#include <stdio.h>      /* printf */
#include <math.h>       /* isgreaterequal, log */
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    double hasil;
    hasil = log(10.0);

    if (isgreaterequal(hasil, 0.0)) {
        printf("log(10.0) is not negative");
    } else {
        printf("log(10.0) is negative");
    }
        
    _getch();
    return 0;
}