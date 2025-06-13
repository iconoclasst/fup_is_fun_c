#include <stdio.h>

int main(void) {
    char e1, e2;
    scanf("%c %c", &e1, &e2);

    if(e1==e2) {
        printf("empate\n");
    } else if(e1=='r' && e2=='s') {
        printf("jog1\n");
    } else if(e1=='p' && e2=='r') {
        printf("jog1\n");
    } else if(e1=='s' && e2=='p') {
        printf("jog1\n");
    } else {
        printf("jog2\n");
    }
}