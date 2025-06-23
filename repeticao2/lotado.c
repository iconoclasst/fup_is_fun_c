#include <stdio.h>

int main (void) {
    int c, m, ctt=0;
    scanf("%d", &c);

    while (1) {
        scanf("%d", &m);
        ctt += m;
        if (ctt == 0) printf("vazio\n");
        else if (ctt > 0 && ctt < c) printf("ainda cabe\n");
        else if (ctt >= c && ctt < c*2) printf("lotado\n");
        else if (ctt >= c*2) {
            printf("hora de partir\n");
            break;
            return 0;
        }
    }

    return 1;
}