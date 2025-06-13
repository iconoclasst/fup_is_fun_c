#include <stdio.h>
#include <math.h>

int main(void) {
    char c;
    float a;
    scanf("%c %f", &c, &a);

    if(c == 'c') {
        printf("%.2f\n", ceil(a));
    } else if(c == 'r') {
        printf("%.2f\n", round(a));
    } else if(c == 'f') {
        printf("%.2f\n", floor(a));
    } else {
        printf("opcao invalida\n");
    }

}