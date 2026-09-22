#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[6] = {1000}; // перший елемент дорівнює 1000
    int *px = arr;       // покажчик на масив
    int i;

    puts("Введіть 5 цілих чисел:");
    for (i = 1; i < 6; i++) {
        scanf("%d", px + i); // введення через покажчик
    }

    puts("\nМасив:");
    for (i = 0; i < 6; i++) {
        printf("arr[%d] = %d\n", i, *(px + i));
    }

    int min_val = *px; // початкове мінімальне додатне значення
    int min_idx = 0;   // номер (індекс) першого елемента

    for (i = 1; i < 6; i++) {
        if (*(px + i) > 0 && *(px + i) < min_val) {
            min_val = *(px + i); // нове мінімальне додатне
            min_idx = i;         // номер елемента
        }
    }

    printf("\nНомер мінімального додатного елемента: arr[%d] = %d\n", min_idx, min_val);
    system("pause");
    return 0;
}
