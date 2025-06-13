#include <stdio.h>

int main (void) {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if(a == b && b == c){
        printf("3\n");
    } else if (a == b || b == c || a == c) {
        printf("2\n");
    } else {
        printf("0\n");
    }

    return 0;
}