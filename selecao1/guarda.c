#include <stdio.h>

int main (void) {
    int wifi, login, admin;
    scanf("%i %i %i", &wifi, &login, &admin);

    if (wifi==0) {
        printf("you must connect to wifi\n");
        return 1;
    }
    if (login==0) {
        printf("you need to login first\n");
        return 1;
    }
    if (admin==0) {
        printf("you must login as admin\n");
        return 1;
    }
    printf("done\n");
    return 0;
}