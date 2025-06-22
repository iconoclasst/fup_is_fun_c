#include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d %d", &a, &b);

    for(a; a<=b; a++) {
        if(a%3==0 && a%5==0) printf("zigzag\n");
        else if(a%3==0) printf("zig\n");
        else if(a%5==0) printf("zag\n");
        else printf("%d\n", a);
    }

    return 0;
}