#include <stdio.h>

int main()
{
    const float x = -2;
    const float y = -3;

    float z1 = x*x+y*y-(x*y)+2;
    float z2 = (x-y)*(x-y)*(x-y)-3;
    float z3 = (2*(x*x*x)-0.5*(x*x)-x+4)/y;

    

    printf("z1 = %f\n", z1);
    printf("z2 = %f\n", z2);
    printf("z3 = %f\n", z3);

    return 0;
}
