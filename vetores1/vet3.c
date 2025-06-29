#include <stdio.h>

void formata(int vetor[], int n) {

    printf("[");
    for(int i=0; i<n; i++){
        // printf("%d", i);
        if(i==n-1) printf("%d", vetor[i]);
        else printf("%d, ", vetor[i]);
    }

    printf("]\n");
}

int main (void) {
    int n;
    scanf("%d", &n);
    
    int vetor[n];

    int v;
    for (int i=0; i<n; i++) {
        scanf("%d", &vetor[i]);
    }

    int size = sizeof(vetor)/sizeof(vetor[0]);

    formata(vetor, size);

}