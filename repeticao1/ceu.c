#include <stdio.h>

int main (void) {
    int a;
    scanf("%d", &a);

    for(int i=0; i<=10; i++){
        if(i==a) i++;
        if(i==10) {
        printf("ceu ");
        }
        
        else { 
        
        printf("%d ", i);
        }    
    }

    return 0;
}