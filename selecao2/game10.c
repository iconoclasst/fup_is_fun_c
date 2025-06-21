#include <stdio.h>

int main(void){
    int n, d, a, m;
    scanf("%d %d %d", &n, &d, &a);

    m = (d - a + n)%n;
    printf("%d\n", m);
    
}