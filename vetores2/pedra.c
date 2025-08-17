#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int i;
    int mi = -1;
    int mp = 101;

    for (i = 0; i < N; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        if (A < 10 || B < 10) {
            continue;
        }

        int pontuacao = abs(A - B);

       
        if (pontuacao < mp) {
            mp = pontuacao;
            mi = i;
        }
    }

    if (mi == -1) {
        printf("sem ganhador\n");
    } else {
        printf("%d\n", mi);
    }

    return 0;
}
