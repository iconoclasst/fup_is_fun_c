#include <stdio.h>

int main (void) {

    int n;
    scanf("%d", &n);

    int vetor[n];

    for(int i=0; i<n; i++) {
        scanf(" %d", &vetor[i]);
    }

    int soldados=0, rebeldes=0;
    for(int i=0; i<n;i++) {
        if(vetor[i]%2==0) rebeldes+=vetor[i];
        else soldados+=vetor[i];
    }

    if(soldados==rebeldes) printf("empate\n");
    else if(soldados>rebeldes) printf("soldados\n");
    else printf("rebeldes\n");

    return 0;
    
}