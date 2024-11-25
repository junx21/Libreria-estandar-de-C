#include "EJ1.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void ejercicio1a() {
    int num = -10;
    int abs_num = abs(num);
    printf("El valor absoluto de %d es %d\n", num, abs_num);
}

void ejercicio1b() {
    srand(time(0));
    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);
}