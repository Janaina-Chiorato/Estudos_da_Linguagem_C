// Escreva um programa que:
// Leia inteiros até que o usuário digite 0.
// Conte e imprima quantos números pares e ímpares foram informados
// (desconsiderando o 0). 
#include <stdio.h>
int main(){

    int num = -1; // num numero inteiro
    int quantidadeImpar = 0; // contadores par e impar
    int quantidadePar = 0;
    int total = 0;

    printf("Digite numeros inteiros (Para sair digite 0).\n ");

    while(num != 0){ // iniciando o loop
        printf("Digite o numero: ");
        scanf("%d", &num);

        if (num != 0){ // inicia se o numero for diferente de zero

            if(num % 2 != 0){
                quantidadeImpar++;

            }if(num % 2 == 0){
                quantidadePar++;
            }
           total = quantidadeImpar + quantidadePar;
        }else{
            printf("-----------------------------\n");
            printf("O zero 0 nao entra na conta\n"); // desconsiderando o zero
            printf("\n");
        }                
    }  
    //Print formatado
    printf("----- Resultado Esperado -----\n");
    printf("O total de numeros Digitados: %d\n", total);
    printf("Quantidade de numeros Impares: %d\n ", quantidadeImpar);
    printf("Quantidade de numeros Pares: %d\n ", quantidadePar);

    return 0;
}