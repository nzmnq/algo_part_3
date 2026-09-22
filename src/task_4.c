#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float v, s, f;

    puts("Input v, s, f");
    scanf("%f %f %f", &v, &s, &f);

    double res = pow(s, 3) / v - f * v;
    printf("v=%7.4f, s=%7.4f, f=%7.4f res=%7.4f\n", v, s, f, res);

    system("pause");
    return 0;
}