#include <stdio.h>

int main (void) {
    int qt1, qt2, qt3;
    scanf("%i %i %i", &qt1, &qt2, &qt3);

    float v1, v2, v3, dinheiro;
    scanf("%f %f %f %f", &v1, &v2, &v3, &dinheiro);

    float total = qt1*v1 + qt2*v2 + qt3*v3;
    float troco = dinheiro - total;
    printf("%.2f\n", troco);

}