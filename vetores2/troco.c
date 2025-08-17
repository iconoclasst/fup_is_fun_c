#include <stdio.h>

int main (void) {
    float valor=0.0;
    int n=11;
    scanf("%f", &valor);

    float dinheiro[]={100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05};
    float resultados[n];

    float temp=valor;

    for(int i=0; i<n; i++) {
        if (temp >= dinheiro[i]) {
            temp -= dinheiro[i];
            printf("%f ", dinheiro[i]);
            i=0;
            // printf("%f ", dinheiro[i]);
        }
    }

    return 0;

}
