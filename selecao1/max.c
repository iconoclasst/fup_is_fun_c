#include <stdio.h>

int main (void) {
    int a,b, maior;
    scanf("%i %i", &a, &b);

    if(a>b){
        maior=a;
    } else {
        maior = b;
    }
    printf("%i\n", maior);
}