#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *fi[] = {"National Technical University", "Faculty of Applied Mathematics", "Software Engineering"};

    printf("%s\n%s\n%s\n\n", fi[0], fi[1], fi[2]);

    printf("Size massiv pointer = %zu\n", sizeof(fi));
    printf("Size pointer 1 string = %zu\n", sizeof(fi[0]));
    printf("Size pointer 2 string = %zu\n", sizeof(fi[1]));
    printf("Size pointer 3 string = %zu\n", sizeof(fi[2]));

    puts("\nMassiv pointer string:");
    for (int i = 0; i < 3; i++) {
        printf("%s   %zu\n", fi[i], (size_t)strlen(fi[i]));
    }

    // підрахунок кількості букв 'e' у третьому рядку
    int count = 0;
    for (int i = 0; fi[2][i] != '\0'; i++) {
        if (fi[2][i] == 'e' || fi[2][i] == 'E') {
            count++;
        }
    }

    printf("\nКількість букв 'e' у третьому рядку: %d\n", count);

    system("pause");
    return 0;
}
