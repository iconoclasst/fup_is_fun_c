#include <stdio.h>

int main (void) {
    
    int x, n, ctt=0;
    scanf("%d %d", &x, &n);

    int robos[n];
    for (int i=0; i<n; i++) {
        scanf(" %d", &robos[i]);
    }

    for (int i=0; i<n; i++) {
        if(robos[i] == x) ctt ++;
    }

    printf("%d\n", ctt);
    return 0;
}