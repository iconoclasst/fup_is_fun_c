#include <stdio.h>

int main(void) {
    int h, p, f, d, n=16;
    scanf("%d %d %d %d", &h, &p, &f, &d);

    int np=f;
    while (1) {
        np = (np+d+n)%n;
        // printf("%d\n", np);
        if(np==h) {
            printf("S\n");
            break;
            return 0;
        }
        if(np==p) {
            printf("N\n");
            break;
            return 0;
        }
    }

    return 1;

}