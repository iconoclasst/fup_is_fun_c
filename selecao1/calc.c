#include <stdio.h>

int main (void) {
    int a, b;
    char o;

    scanf("%i %i %c", &a, &b, &o);
    if(o == '/' && b == 0) {
        printf("b == 0 nao pode\n");
        return 1;
    }
    if(o == '+') {
        printf("%i\n", a+b);
        return 0;
    } else if(o == '-') {
        printf("%i\n", a-b);
        return 0;
    } else if(o == '/') {
        printf("%i\n", a/b);
        return 0;
    } else if(o == '*') {
        printf("%i\n", a*b);
        return 0;
    }
}