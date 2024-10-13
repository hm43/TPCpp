#include<stdio.h>

void main(){
    int nombre;
    printf("Donner une valeur: ");
    scanf("%d", &nombre);

    if(nombre > 0){
        printf("La valeur est positif.");
    }else if( nombre < 0){
        printf("La valeur est négatif.");
    }else{
        printf("La valeur est nulle.");
    }
    printf("\n\n");
}