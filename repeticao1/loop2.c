#include <stdio.h>

int main(void) {

    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("[ ");
    for(a; a<b; a++){
        printf("%d ", a);
    }
    printf("]\n");
}