#include <stdio.h>

int main(void) {
        int b, t;
        scanf("%d %d", &b, &t);

        float marea = (160 * 70)/2;
        float esquerda = (b+t)*70/2;

        if(esquerda==marea){
            printf("0\n");
            return 1;
        }

        if(esquerda>marea){
            printf("1\n");
            return 0;
        } else if(esquerda<marea){
            printf("2\n");
            return 0;
        }
        
        
}