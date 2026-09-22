#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[8] = {500};
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

    int min = *px; // беремо перший елемент за початковий мінімум
    i = 1;         // перевірку починаємо з наступного

    while (i < 8) {
        if (*(px + i) % 5 == 0 && *(px + i) < min) {
            min = *(px + i);
        }
        i++;
    }

    printf("min=%d\n", min);
    system("pause");
    return 0;
}
