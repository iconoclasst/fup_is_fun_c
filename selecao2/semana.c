#include <stdio.h>

int main(void) {
    int dia, hora;
    scanf("%d %d", &dia, &hora);
    //1=d, 2=s, 3=t, 4=q, 5=q, 6=s, 7=s
    //dias de trabalho: segunda a sexta (8h - 11h; 14h - 17h)
    //dias de trabalho: sabado (8h - 11;)
    
    if(dia==1){
        printf("NAO\n");
        return 0;
    }
    if(dia==7 && (hora>11 || hora<8)){
        printf("NAO\n");
        return 0;
    }
    if((dia >1 && dia<7) && ((hora < 8 || hora >11 && hora <14) || (hora > 17))){
        printf("NAO\n");
        return 0;
    }

    printf("SIM\n");
    return 0;
}