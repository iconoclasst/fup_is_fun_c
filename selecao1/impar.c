#include <stdio.h>

int main (void) {
    int p, d1, d2;
    scanf("%i %i %i", &p, &d1, &d2);
    int res = d1 + d2;
    int v;
    
    if(res%2 == 0 && p == 0) {
        v=0;
    } else if(res%2 == 0 && p == 1) {
        v=1;
    } else if(res%2 != 0 && p == 0) {
        v=1;
    } else {
        v=0;
    }


    printf("%i\n", v);
}