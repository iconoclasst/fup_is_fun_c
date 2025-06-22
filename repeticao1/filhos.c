#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i=0; i<b; i++){
        printf("%d\n", a);
        a+=2;
    }

    return 0;
}