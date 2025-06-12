#include <stdio.h>

int main(void) {
    int a;
    scanf("%i", &a);

    if(a%7==0){
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
}