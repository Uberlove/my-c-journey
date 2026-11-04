#include <stdio.h>

int main()
{
    float a,b,c;
    float perimetro;
    float area;
    scanf("%f%f%f",&a,&b,&c);
    if(a + b > c && a + c > b && c + b > a) printf("Perimetro = %.1f\n", perimetro = a+b+c);
    else printf("Area = %.1f\n", area = ((a + b) * c) / 2);

    return 0;
}
