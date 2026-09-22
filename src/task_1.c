#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

float x,z;

puts("Input x, z");
scanf("%f %f", &x,&z);

double res = (pow((4.2*x-z), 2)/3.5);
printf("x=%6.2f, z=%6.2f res=%8.3f\n",x,z,res);

system("pause");

return 0;
}
