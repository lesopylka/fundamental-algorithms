#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void Swap(int * a, int * b) {
    a +=b;
    b = a - b;
    a = a - b;
    //   int c;
    //   c = * a;
    //   * a = * b;
    //   * b = c;
}

int main(void) {
    int n = 20, i, j;
    int * matrix = (int * ) malloc(sizeof(int) * n);
    if (matrix == NULL) exit(1);
    srand(time(0));
    int min, max, min_indx = 0, max_indx = 0;
    max = INT_MIN;
    min = INT_MAX;
    for (i = 0; i < n; i++) {
        matrix[i] = (rand() % 100) * (rand() % 8 == 0 ? -1 : 1);
        printf("%d ", matrix[i]);
        if (matrix[i] > max) {
            max = matrix[i];
            max_indx = i;
        }
        if (matrix[i] < min) {
            min = matrix[i];
            min_indx = i;
        }
    }
    Swap( & matrix[nmin], & matrix[nmax]);
    printf(" min = %d, max = %d\n", min, max);

    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i]);
    }
    printf(" — result tranfer");

    free(matrix);

    return 0;
}


// 16 строка: проверки на корректность выделения памяти нет, пофиксить с возможностью обработки ситуации в вызывающем коде+
// 36 строка: вместо &a[i] лучше написать a + i, -2 операции на использование сразу