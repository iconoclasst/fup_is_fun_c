#include <stdio.h>

int main(void) {
    int a;
    scanf("%i", &a);

    if(a==0){
        printf("%i\n", a);
    } else if(a>0){
        printf("+\n");
    } else {
        printf("-\n");
    }
}