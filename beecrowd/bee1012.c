#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float areatriangulo = a * c / 2;
    float areacirculo = 3.14159 * c * c;
    float trapezio = ((a + b) * c) / 2;
    float areaquadrado = b * b;
    float arearetangulo = a * b;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", areatriangulo, areacirculo, trapezio, areaquadrado, arearetangulo);

    return 0;
}
