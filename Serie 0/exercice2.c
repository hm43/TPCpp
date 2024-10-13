#include<stdio.h>

void main(){
    for(int i = 1; i <= 12; i++){
        printf("Table de multiplication de %d:\n", i);
        for(int j = 1; j <= 12; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    printf("\n\n");
}