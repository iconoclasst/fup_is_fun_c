#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sm1 = a+b;
    int sm2 = a+c;
    int sm3 = b+c;

    if(c>sm1){
        printf("False\n");
        return 0;
    } else if(b>sm2){
        printf("False\n");
        return 0;
    } else if(a>sm3){
        printf("False\n");
        return 0;
    } else {
        printf("True\n");
        return 0;
    }
}