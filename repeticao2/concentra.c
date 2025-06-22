#include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int j=b;
    printf("[ ");
    for (int i=a; i<=b; i++){
        printf("%d %d ", i, j);
        j--;
    }
    printf("]\n");
    return 0;
}