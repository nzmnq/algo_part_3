#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[7] = {201}; // перший елемент дорівнює 201
    int *px = arr;      // покажчик на масив
    int i;

    puts("Введіть 6 цілих чисел:");
    for (i = 1; i < 7; i++) {
        scanf("%d", px + i); // введення через покажчик
    }

    puts("\nМасив:");
    for (i = 0; i < 7; i++) {
        printf("arr[%d] = %d\n", i, *(px + i));
    }

    int min_odd = *px; // початковий мінімум серед непарних (201 непарне)
    for (i = 1; i < 7; i++) {
        if (*(px + i) % 2 != 0 && *(px + i) < min_odd) {
            min_odd = *(px + i); // знайдено менший непарний елемент
        }
    }

    printf("\nМінімальний непарний елемент: %d\n", min_odd);
    system("pause");
    return 0;
}
