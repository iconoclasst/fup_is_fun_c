#include <stdio.h>

void imprimir(int vet[], int n) {
    printf("[ ");
    for(int i=0; i<n; i++) {
        printf("%d ", vet[i]);
    }
    printf("]\n");
}

int main (void) {

    int n;
    scanf("%d", &n);
    int vet[n];

    int pa=0, im=0;

    for (int i=0; i<n; i++) {
        scanf(" %d", &vet[i]);
        if(vet[i]%2==0) pa++;
        else im++;
    }

   int alunos[im], servidores[pa];   

    int its=0, ita=0;

    for(int i=0; i<n; i++) {
        if(vet[i] % 2 == 0) {
            servidores[its] = vet[i];
            its++;
        }
        else {
            alunos[ita] = vet[i];
            ita++;
        }
    }

    imprimir(alunos, im);
    imprimir(servidores, pa);

    return 0;
}