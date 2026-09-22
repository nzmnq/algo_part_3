#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;

    puts("Input a, b, c");
    scanf("%lf %lf %lf", &a, &b, &c);

    double res = a + 2.8 * b - pow(c, 2);
    printf("a=%6.3lf, b=%6.3lf, c=%6.3lf res=%6.3lf\n", a, b, c, res);

    system("pause");
    return 0;
}