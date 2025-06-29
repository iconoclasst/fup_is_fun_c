#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    
    int vetor[n];

    int v;
    for (int i=0; i<n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("[ ");
    for (int i=0; i<n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");
}