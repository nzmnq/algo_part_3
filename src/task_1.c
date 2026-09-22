#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[8] = {500}; // перший елемент дорівнює 500
    int *px = arr;      // покажчик на масив
    int i;

    puts("Введіть 7 цілих чисел:");
    for (i = 1; i < 8; i++) {
        scanf("%d", px + i); // введення через покажчик
    }

    puts("\nМасив:");
    for (i = 0; i < 8; i++) {
        printf("arr[%d] = %d\n", i, *(px + i));
    }

    int min = *px; // початковий мінімум (500 кратне 5)
    for (i = 1; i < 8; i++) {
        if (*(px + i) % 5 == 0 && *(px + i) < min) {
            min = *(px + i); // знайдено менший елемент кратний 5
        }
    }

    printf("\nМінімальний елемент кратний 5: %d\n", min);
    system("pause");
    return 0;
}
