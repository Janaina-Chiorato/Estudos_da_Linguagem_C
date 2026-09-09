/*Imprima os numeros pares de 0 á 20 usando um laço de repetição for*/

#include <stdio.h>
int main(){

    for(int i = 2; i <= 20; i++){
        if(i % 2 == 0){
            printf("O numero eh: %d\n",i);
        }
    }
    return 0;
}