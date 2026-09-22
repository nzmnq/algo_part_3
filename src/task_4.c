#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[8] = {-100};
    int *px = arr;
    int i = 1;

    printf("Введіть 7 елементів масиву:\n");
    while (i < 8) {
        scanf("%d", px + i);
        i++;
    }

    printf("\nМасив:\n");
    i = 0;
    while (i < 8) {
        printf("arr[%d]=%d\n", i, *(px + i));
        i++;
    }

    int max = *px; // беремо перший елемент за початковий максимум
    i = 1;         // перевірку починаємо з наступного

    while (i < 8) {
        if (*(px + i) % 2 == 0 && *(px + i) > max) {
            max = *(px + i);
        }
        i++;
    }

    printf("max=%d\n", max);
    system("pause");
    return 0;
}
