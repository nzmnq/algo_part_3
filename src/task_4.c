#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[8] = {-100}; // перший елемент дорівнює -100
    int *px = arr;       // покажчик на масив
    int i;

    puts("Введіть 7 цілих чисел:");
    for (i = 1; i < 8; i++) {
        scanf("%d", px + i); // введення через покажчик
    }

    puts("\nМасив:");
    for (i = 0; i < 8; i++) {
        printf("arr[%d] = %d\n", i, *(px + i));
    }

    int max_even = *px; // початковий максимум серед парних (-100 парне)
    for (i = 1; i < 8; i++) {
        if (*(px + i) % 2 == 0 && *(px + i) > max_even) {
            max_even = *(px + i); // знайдено більший парний елемент
        }
    }

    printf("\nМаксимальний парний елемент: %d\n", max_even);
    system("pause");
    return 0;
}
