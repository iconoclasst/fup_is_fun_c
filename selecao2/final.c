#include <stdio.h>

int main(void) {

    int n1, n2, nf;
    scanf("%d %d %d", &n1, &n2, &nf);
    float media1 = (n1+n2)/2.0;

    if(media1>= 7) {
        printf("aprovado\n");
        return 0;
    }
    if(media1<4) {
        printf("reprovado\n");
        return 0;
    }

    float nmedia = (media1 + nf) / 2.0;
    if(nmedia>=5){
        printf("aprovado na final\n");
        return 0;
    } else {
        printf("reprovado na final\n");
        return 0;
    }

}