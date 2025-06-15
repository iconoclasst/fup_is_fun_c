#include <stdio.h>

int main(void) {
    int m, a, b;
    scanf("%d %d %d", &m, &a, &b);

    int c = m - (a+b);
    int idades[] = {a, b, c};
    int maior = idades[0];


    for(int i=0; i<3; i++){
        if(idades[i]>maior){
        maior=idades[i];
        }
    }

    printf("%i\n", maior);
}