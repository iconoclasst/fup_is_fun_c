#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int divisor = 2;
    while (N > 1 && divisor * divisor <= N) {
        int count = 0;
        while (N % divisor == 0) {
            count++;
            N /= divisor;
        }
        if (count > 0) {
            printf("%d %d\n", divisor, count);
        }
        divisor++;
    }

    if (N > 1) {
        printf("%d 1\n", N);
    }

    return 0;
}