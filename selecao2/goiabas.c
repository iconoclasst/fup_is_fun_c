#include <stdio.h>

int main(void) {
    int c, b, g, a;
    scanf("%d %d %d %d", &c, &b, &g, &a);
    int frutas = b+g+a;
    int ctt=frutas/c;

    if(frutas%c!=0) {
        ctt+=1;
    }
    printf("%i\n", ctt);
    return 0;
}