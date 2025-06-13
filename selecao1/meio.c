#include <stdio.h>

int main(void) {
    int a, b, c, meio;
    scanf("%i %i %i", &a, &b, &c);

    if(a>=b && a<=c) {
        meio = a;
    } else if(b>=a && b<=c) {
        meio = b;
    } else {
        meio = c;
    }
    printf("%i\n", meio);
}