#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void index (int, int, int*);

int main() {
    int m, maxx = 0;
    int *mass;
    printf ("Введите количество элементов массива: ");
    scanf ("%d", &m);
    srand(time(NULL));
    //int f;
    mass = (int*)calloc(m, sizeof(int));
    for (int i = 0; i < m; i++) {
        mass[i] = rand() % 11 - 5;
        //f = mas[i];
        //printf("%d\n", f);
    }
    //maximum(maxx, m, mass);
    maxx = mass[0];
    index(m, maxx, mass);
    return 0;
}

void index(int nn, int max, int *massive) {
    //printf ("Введите количество элементов массива: ");
    //scanf ("%d", &nn);
    //maximum(maxx, nn, massive);
    for (int ii = 0; ii < nn; ii++) {
        printf("%d\n", massive[ii]);
        if (massive[ii] > max) {
            max = massive[ii];
        }
    }
    printf("Максимальное значение %d\n", max);
    printf("Его индексы: ");
    for (int ii = 0; ii < nn; ii++) {
        if (max == massive[ii]) {
            printf("%d\t", ii);
        }
    }
}
