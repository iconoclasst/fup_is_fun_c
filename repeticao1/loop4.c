#include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if(a>b) {
        printf("[ ");
        for(a;a>b; a--){
            printf("%d ", a);
        }
        printf("]\n");
        return 0;
    }

    printf("[ ");
        for(a;a<b; a++){
            printf("%d ", a);
        }
        printf("]\n");
        return 0;


    return 0;
}