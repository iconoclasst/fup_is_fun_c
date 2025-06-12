#include <stdio.h>

int main (void) {
    int segundos, resto;
    scanf("%i", &segundos);

    int hora = segundos/3600;
    resto = segundos%3600;
    int min = resto/60;
    resto = resto%60;
    
    printf("%i:%i:%i\n", hora, min, resto);
    
}