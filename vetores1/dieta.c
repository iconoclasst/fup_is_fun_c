#include <stdio.h>


int sum (int vet[], int n) {
    int s=0;
    for(int i=0; i<n; i++) {
        s+=vet[i];
    }
    return s;
}

int main (void) {
    
    int n;
    scanf("%d", &n);

    int vet[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &vet[i]);
    }
    float result = sum(vet, n) / n;
    printf("%.1f\n", result);

    return 0;
}