#include <stdio.h>
#include <math.h>

int main()
{
    
    
    double a, b, c, d, x1, x2;
    a = 5.1;
    b = 1;
    c = -2.2;
    
    d = b*b - 4*a*c;
    
    printf("d=%lf\n",d);
    
    x1 = (-b + sqrt(d)/(2*a));
    x2 = (-b + sqrt(d)/(2*a));
    
    printf("x1=%lf x2=%lf", x1, x2);

    return 0;
}
