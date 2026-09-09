/*Faça um programa que peça ao usuario numeros e informe se sao pares ou impares
Ele deve continuar pedindo numeros até que o usuário digite 0, que encerrará o programa. */

#include <stdio.h>
int main(){

    int numero;

    printf("Digite um numero inteiro (0 para sair): ");// pede ao usuário para digitar um número inteiro
    scanf("%d", &numero);// lê o número digitado pelo usuário
    while (getchar() != '\n'); // limpa o buffer do teclado para evitar problemas com entradas inválidas

    while(numero != 0){
        if(numero %2 == 0){
            printf("O numero %d eh PAR.\n", numero);
        }
        else{
            printf("O numero %d eh IMPAR.\n", numero);
        }
        printf("Digite outro numero: ");
        scanf("%d", &numero);
        while (getchar() != '\n');
    }
    printf("Programa Encerrado.\n");

    return 0;

}
