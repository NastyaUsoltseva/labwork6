#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** A;
    int n, m, k, k1, tmp;
    printf("Input amount of lines: ");
    scanf_s("%d", &n);
    printf("Input amount of columns: ");
    scanf_s("%d", &m);
    A = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        *(A + i) = (int*)malloc(m * sizeof(int));
    }
    printf("Input values of array:\n ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &(*(*(A + i) + j)));
        }
    }
    printf("Array:\n ");
    for (int i = 0; i < n; i++, putchar('\n')){
        for (int j = 0; j < m; j++){
            printf("%5d ", *(*(A + i) + j));
        }
    }
    printf("Input numbers of lines: ");
    scanf_s("%d", &k);
    scanf_s("%d", &k1);
    for (int j = 0; j < m; j++){
        tmp = *(*(A + k - 1) + j);
        *(*(A + k - 1) + j) = *(*(A + k1 - 1) + j);
        *(*(A + k1 - 1) + j) = tmp;
    }
    printf("Sorted array: ");
    printf("\n");
    for (int i = 0; i < n; i++, putchar('\n')){
        for (int j = 0; j < m; j++){
            printf("%5d ", *(*(A + i) + j));
        }
    }
    return 0;
}