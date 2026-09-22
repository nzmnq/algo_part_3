#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double k, g;

    puts("Input k, g");
    scanf("%lf %lf", &k, &g);

    double res = pow(k, 2) + (g - k) / 2.3;
    printf("k=%8.3lf, g=%8.3lf res=%8.3lf\n", k, g, res);

    system("pause");
    return 0;
}