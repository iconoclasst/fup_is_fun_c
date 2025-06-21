#include <stdio.h>

int main (void) {
    float salario, novo_salario;
    scanf("%f", &salario);

    float aumento=0.0;
    if(salario<=1000) {
        aumento = 0.2 * salario;
    } else if(salario<=1500){
        aumento = 0.15 * salario;
    } else if(salario<=2000){
        aumento = 0.1 * salario;
    } else {
        aumento = 0.05 * salario;
    }
    novo_salario = salario+aumento;

    printf("%.2f\n", novo_salario);
}