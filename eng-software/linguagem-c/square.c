#include <stdio.h>

int square(int);

int main(){
    int x;
    for(x = 0; x < 15; x++)
        printf("%d\n", square(x));
    return 0;
}

int square(int value){
    return value * value;
}
