#include <stdio.h>

int main() {
    int n;
    int sabores[2] = {0, 0};
    int turnos[2] = {0, 0};
    char sabor, turno;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c %c", &sabor, &turno);

        if (sabor == 'c') {
            sabores[0]++;
        } else if (sabor == 'l') {
            sabores[1]++;
        }

        if (turno == 'm') {
            turnos[0]++;
        } else if (turno == 't') {
            turnos[1]++;
        }
    }

    if (sabores[0] > sabores[1]) {
        printf("c\n");
    } else if (sabores[1] > sabores[0]) {
        printf("l\n");
    } else {
        printf("empate\n");
    }

    if (turnos[0] < turnos[1]) {
        printf("m\n");
    } else if (turnos[1] < turnos[0]) {
        printf("t\n");
    } else {
        printf("empate\n");
    }

    return 0;
}
