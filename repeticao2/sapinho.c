#include <stdio.h>

int main (void) {
    int p, s, e, posicao, posicao_descanso;
    scanf("%d %d %d", &p, &s, &e);

    posicao=s;
    posicao_descanso=0;
    while (1) {
        if(posicao>=p){
            printf("%d saiu\n", posicao_descanso);
            break;
            return 0;
        } else {
            printf("%d %d\n", posicao_descanso, posicao);
        }   
        posicao_descanso = posicao-e;
        posicao = posicao_descanso + s;
    }
    return 1;
}