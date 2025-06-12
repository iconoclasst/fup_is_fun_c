#include <stdio.h>
#include <math.h>

int main (void) {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    float p = (a+b+c)/2;
    float area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f\n", area);
}