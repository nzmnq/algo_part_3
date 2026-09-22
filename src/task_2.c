#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[6] = {1000};
    int *px = arr;
    int i = 1;

    printf("Введіть 5 елементів масиву:\n");
    while (i < 6) {
        scanf("%d", px + i);
        i++;
    }

    printf("\nМасив:\n");
    i = 0;
    while (i < 6) {
        printf("arr[%d]=%d\n", i, *(px + i));
        i++;
    }

    int min = *px; // беремо перший елемент за початковий мінімум
    int min_idx = 0;
    i = 1;         // перевірку починаємо з наступного

    while (i < 6) {
        if (*(px + i) > 0 && *(px + i) < min) {
            min = *(px + i);
            min_idx = i;
        }
        i++;
    }

    printf("Номер мінімального додатного елемента: arr[%d]=%d\n", min_idx, min);
    system("pause");
    return 0;
}
