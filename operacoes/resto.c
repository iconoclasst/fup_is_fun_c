#include <stdio.h>

int main (void) {
    int a, b, q, r;
    scanf("%i %i", &a, &b);

    q = a/b;
    r = a%b;
    printf("%i\n%i\n", q, r);

}