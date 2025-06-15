#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float delta = pow(b, 2) - 4*a*c;

    float x1 = (-b+sqrt(delta))/(2*a);
    float x2 = (-b-sqrt(delta))/(2*a);

    if(delta<0){
        printf("nao ha raiz real\n");
        return 1;
    }

    if(delta==0) {
        printf("%.2f\n", x1);
        return 0;
    }

    printf("%.2f\n%.2f\n", x1, x2);

}