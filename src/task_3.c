#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[7] = {-2000}; // перший елемент дорівнює -2000
    int *px = arr;        // покажчик на масив
    int i;

    puts("Введіть 6 цілих чисел:");
    for (i = 1; i < 7; i++) {
        scanf("%d", px + i); // введення через покажчик
    }

    puts("\nМасив:");
    for (i = 0; i < 7; i++) {
        printf("arr[%d] = %d\n", i, *(px + i));
    }

    int max_neg = *px; // початковий максимальний від'ємний (-2000)
    int max_idx = 0;   // номер (індекс) першого елемента

    for (i = 1; i < 7; i++) {
        if (*(px + i) < 0 && *(px + i) > max_neg) {
            max_neg = *(px + i); // знайдено більший від'ємний елемент
            max_idx = i;         // номер елемента
        }
    }

    printf("\nНомер максимального від'ємного елемента: arr[%d] = %d\n", max_idx, max_neg);
    system("pause");
    return 0;
}
