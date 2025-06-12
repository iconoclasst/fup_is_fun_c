#include <stdio.h>

int absolute(int r) {
    if(r >= 0){
        return r;
    }
    return r * -1;
}

int main(void) {
    int a, b, r;
    scanf("%i %i", &a, &b);
    r = a - b;
    int ar = absolute(r);
    printf("%i\n", ar);
}