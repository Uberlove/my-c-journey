#include <stdio.h>

int main()
{
    int n, min = 60, hour = min * 60;
    scanf("%d", &n);
    printf("%d:%d:%d\n", n/hour, (n%hour)/60, n%60);

    return 0;
}
