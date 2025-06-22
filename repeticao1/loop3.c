#include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if(b>a){
        return 1;
    }

    printf("[ ");
    for(a; a>b; a--){
        printf("%d ", a);
    }
    printf("]\n");

    return 0;
}