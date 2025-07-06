#include <stdio.h>
#include <stdlib.h>

int somatorio(char animais[], int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        if(animais[i] == 'c') sum += 4;
        else if (animais[i] == 'g') sum += 2;
        else if (animais[i] == 'v') sum += 4;
    }
    return sum;
}

int main (void) {
    int chute_cb, chute_c, qtd;
    scanf("%d %d %d", &chute_cb, &chute_c, &qtd);
    
    char animais[qtd];

    for (int i=0; i<qtd; i++){
        scanf(" %c", &animais[i]);
    }

    int sum = somatorio(animais, qtd);
    printf("%d\n", sum);

    

    int d1 = abs(chute_cb - sum);
    int d2 = abs(chute_c - sum);

    if(d1 == d2) {
        printf("empate\n");
        return 1;
    }
    
    if (d1 < d2) {
        printf("Chico Bento\n");
        return 0;
    } else if(d1 > d2) {
        printf("Cebolinha\n");
        return 0;
    }

    return 0;
}