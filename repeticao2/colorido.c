#include <stdio.h>

int main(void) {
    int n;
    char c;
    scanf("%d %c", &n, &c);

    printf("[ ");
    for(int i=0; i<=10; i++){
        if(i==10) printf("ceu ");
        else {
            if(i==n) i++;

            printf("%d%c ", i, c);
            if(c=='d') c='e';
            else c='d';
        }
    }
        printf("]\n");
}