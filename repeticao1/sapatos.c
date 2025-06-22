#include <stdio.h>

int main (void) {
    int a, b, soma=0;
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("invalido\n");
        return 1;
    }

    for(a; a<=b; a++){
        if(a%2==0 && a%3==0){
            soma+=a;
        }
    }
    printf("%d\n", soma);
    return 0;
}