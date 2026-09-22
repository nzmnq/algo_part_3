#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *fi[] = {"Shevchenko", "Taras", "Hryhorovych"};

    printf("%s\n%s\n%s\n\n", fi[0], fi[1], fi[2]);

    printf("Size massiv pointer = %zu\n", sizeof(fi));
    printf("Size pointer 1 string = %zu\n", sizeof(fi[0]));
    printf("Size pointer 2 string = %zu\n", sizeof(fi[1]));
    printf("Size pointer 3 string = %zu\n", sizeof(fi[2]));

    puts("\nMassiv pointer string:");
    for (int i = 0; i < 3; i++) {
        printf("%s   %zu\n", fi[i], (size_t)strlen(fi[i]));
    }

    // підрахунок кількості букв 'o' у першому рядку
    int count = 0;
    for (int i = 0; fi[0][i] != '\0'; i++) {
        if (fi[0][i] == 'o' || fi[0][i] == 'O') {
            count++;
        }
    }

    printf("\nКількість букв 'o' у першому рядку: %d\n", count);

    system("pause");
    return 0;
}
