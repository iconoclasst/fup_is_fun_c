#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("[ ");
    while (1) {
        if(a >= b){
            break;
        }

        if(a%2!=0) {
            printf("%d ", a);
            a++;
            continue;
        }
        
        a++;
    }
    printf("]\n");
}
