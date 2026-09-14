/*Faça o programa que apresenta a seguinte saída, perguntando ao usuário o
número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5
*/

#include <stdio.h>
int main(){
    
    int maximo;

    // loop for para garantir que o número digitado seja impar "verificação"
    for(;;){
        printf("Digite um numero maximo impar: ");
        scanf("%d", &maximo);

        if(maximo % 2 != 0){
            break; // sai do loop se o número for ímpar
        
            printf("Erro:O numero digitado nao eh impar, tente novamente.\n");
        }
    }
    printf("Saida:\n");
    for (int inicio =1; inicio <= (maximo + 1) / 2; inicio++){
        for (int espacos = 1; espacos < inicio; espacos++){
            printf("  ");// imprime dois espaços
        }
        for (int numero = inicio; numero <= maximo - inicio + 1; numero++){
            printf("%d ", numero);
        }
        printf("\n"); // imprime uma nova linha após cada linha de números
    }
    return 0;
}