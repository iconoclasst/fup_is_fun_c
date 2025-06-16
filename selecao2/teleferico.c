#include <stdio.h>

int main (void) {
    int c, a;
    scanf("%d %d", &c, &a);
    int viagens = a/(c-1);

    if(a%(c-1) != 0){
        viagens+=1;
    }

    printf("%d\n", viagens);
}