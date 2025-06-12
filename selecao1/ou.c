#include <stdio.h>

int main(void) {
    int a;
    scanf("%i", &a);
    if(a == 3 || a == 5) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
}