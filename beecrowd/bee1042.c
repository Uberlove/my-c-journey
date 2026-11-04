#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ab = (a + b + abs(b - a)) / 2;
    int bc = (ab + c + abs(ab - c)) / 2;
    if(a < b && b < c) printf("%d\n%d\n%d\n", a,b,c);
    if(b < a && a < c) printf("%d\n%d\n%d\n", b,a,c);
    if(c < a && a < b) printf("%d\n%d\n%d\n", c,a,b);
    if(b < c && c < a) printf("%d\n%d\n%d\n", b,c,a);
    if(a < c && c < b) printf("%d\n%d\n%d\n", a,c,b);
    if(c < b && b < a) printf("%d\n%d\n%d\n", c,b,a);
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}
