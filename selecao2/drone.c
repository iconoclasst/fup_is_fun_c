// #include <stdio.h>

// int main(void) {
//     int a, b, c, h, l;
//     scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);

//     char res = 'N';

//     int area_janela = h*l;
//     int l1=a*b;
//     int l2=a*c;
//     int l3=b*c;
//     int l4=b*a;
//     int l5=c*a;
//     int l6=c*b;

//     int lados[6] = {l1, l2, l3, l4, l5, l6};
//     for(int i=0; i<6; i++) {
//         if(lados[i] <= area_janela) {
//             res = 'S';
//             printf("%c\n", res);
//             return 0;
//         }
//     }

//     printf("%c\n", res);
//     return 1;
// }

#include <stdio.h>

int main(void) {
    int a, b, c, h, l;
    scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);

    char res = 'N';

    if(a<=h && b<=l){
        res='S';
        printf("%c\n", res);
        return 0;
    }
    if(a<=h && c<=l){
        res='S';
        printf("%c\n", res);
        return 0;
    }
    if(c<=h && b<=l){
        res='S';
        printf("%c\n", res);
        return 0;
    }

    if(c<=h && a<=l){
    res='S';
    printf("%c\n", res);
    return 0;
    }

    if(b<=h && a<=l){
    res='S';
    printf("%c\n", res);
    return 0;
    }

    if(b<=h && c<=l){
    res='S';
    printf("%c\n", res);
    return 0;
    }

    printf("%c\n", res);
    return 1;
}