#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    int vet[n];

    for (int i=0; i<n; i++) {
        scanf(" %d", &vet[i]);
    }

    printf("[");
    for(int i=n-1; i>=0; i--) {
        if(i==0)
            printf("%d", vet[i]);
        else
            printf("%d, ", vet[i]);
    }
    printf("]\n");

    return 0;
}