#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[7] = {201};
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

    int min = *px; // беремо перший елемент за початковий мінімум
    i = 1;         // перевірку починаємо з наступного

    while (i < 7) {
        if (*(px + i) % 2 != 0 && *(px + i) < min) {
            min = *(px + i);
        }
        i++;
    }

    printf("min=%d\n", min);
    system("pause");
    return 0;
}
