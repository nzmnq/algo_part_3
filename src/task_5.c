#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x, z, h;

    puts("Input x, z, h");
    scanf("%lf %lf %lf", &x, &z, &h);

    double res = pow(x, 3) + z / pow(h, 2);
    printf("x=%7.3lf, z=%7.3lf, h=%7.3lf res=%7.3lf\n", x, z, h, res);

    system("pause");
    return 0;
}