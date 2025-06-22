#include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d %d", &a, &b);

    for(a; a<b; a++){
        printf("%d\n", a);
    }
}