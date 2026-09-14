/*Crie um código para verificar se dado um número pelo usuário, verifique se ele é
primo*/

#include <stdio.h>
int main(){

    int numero;
    int divisores = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 2){
        printf("Este numero %d nao eh primo. \n", numero);
    }else{
        for(int i = 1; i <= numero; i++){// verifica  a quantidade de divisores do número
            if(numero % i == 0){
                divisores++;
            }
        }
        if(divisores == 2){
            printf("Este numero %d eh primo. \n", numero);
        }else{
            printf("Este numero %d nao eh primo. \n", numero);
        }
    }
    return 0;
}

   