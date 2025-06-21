#include <stdio.h>

int main(void) {
    int n, x, y, s;
    char c;
    scanf("%d %d %d %c %d", &n, &x, &y, &c, &s);

    int nx=0;
    int ny=0;
    
    if(c=='U') {
        y = (y - s % n + n)%n;
    } else if(c=='D') {
        y = (y + s)%n;
    } else if(c=='R') {
        x = (x + s)%n;
    } else if(c=='L'){
        x = (x -s % n + n )%n;
    }

    printf("%i %i\n", x, y);
    
}