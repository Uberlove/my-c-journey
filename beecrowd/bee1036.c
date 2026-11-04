#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double delta = (b*b) - 4*a*c;
    double R1 = (-b + sqrt(delta)) / (2 * a);
    double R2 = (-b - sqrt(delta)) / (2 * a);
    if(a == 0 || delta < 0)
        printf("Impossivel calcular\n");
    else
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);

    return 0;
}
