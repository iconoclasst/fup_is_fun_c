#include <stdio.h> 

int menor (int vet[], int n){

    int menor = vet[0];
    for (int i=0; i<n; i++){
        if(vet[i] < menor) menor=vet[i];
    }

    return menor;
}

int main (void) {
    const int N = 5;

    int vet[N];

    for (int i=0; i<N; i++){
        scanf("%d", &vet[i]);
    }
    int min = menor(vet, N);
    printf("%d\n", min);
}