/*Contagem Regressiva com While
O usuario digita um numero e o programa conta regressivamente ate 1*/

#include <stdio.h>
int main(){

    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while(numero >=1){
        printf("%d\n", numero);// o print deve vir antes do decremento para que o numero digitado seja impresso
        numero--;
    }
    return 0;
}