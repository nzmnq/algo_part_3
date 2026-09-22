#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[7] = {-2000};
    int *px = arr;
    int i = 1;

    printf("Введіть 6 елементів масиву:\n");
    while (i < 7) {
        scanf("%d", px + i);
        i++;
    }

    printf("\nМасив:\n");
    i = 0;
    while (i < 7) {
        printf("arr[%d]=%d\n", i, *(px + i));
        i++;
    }

    int max = *px; // беремо перший елемент за початковий максимум
    int max_idx = 0;
    i = 1;         // перевірку починаємо з наступного

    while (i < 7) {
        if (*(px + i) < 0 && *(px + i) > max) {
            max = *(px + i);
            max_idx = i;
        }
        i++;
    }

    printf("Номер максимального від'ємного елемента: arr[%d]=%d\n", max_idx, max);
    system("pause");
    return 0;
}
