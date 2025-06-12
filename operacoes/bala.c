#include <stdio.h>
#include <math.h>

int main (void) {
    float xa, ya, xb, yb;
    scanf("%f %f %f %f", &xa, &ya, &xb, &yb);

    float d1 =pow(xb-xa, 2);
    float d2 =pow(yb-ya, 2);

    float d = sqrt(d1 + d2);

    printf("%.2f\n", d);
}