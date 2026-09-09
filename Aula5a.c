/* Mostre para o usuario um menu com 3 opções.
Se o usuário escolher a opção 1, mostre você escolheu a opção 1.
Se o usuário escolher a opção 2, mostre você escolheu a opção 2.
Se o usuário escolher a opção 3, encerre o programa. 
seo o usuario escolher outra opção, mostre uma mensagem de erro.
voltando a exibir o menu novamente. O programa não será encerrado. */

#include <stdio.h>
int main(){

    int opcao;

    do{// o do while garante que o menu seja exibido pelo menos uma vez
        printf("====== Menu de opcoes ======\n");
        printf("1 - Opcao 1\n");
        printf("2 - Opcao 2\n");
        printf("3 - Sair\n");

        scanf("%d", &opcao); // lê a opção escolhida pelo usuário
        while (getchar() != '\n');// limpa o buffer do teclado para evitar problemas com entradas inválidas

        if(opcao == 1){
            printf("Voce escolheu a opcao 1.\n");
        }
        else if(opcao == 2){
            printf("Voce escolheu a opcao 2.\n");
        }
        else if(opcao == 3){
            printf("Encerrando o programa.\n");
        }
        else{
            printf("Opcao invalida. Tente novamente.\n");
        }

    }while(opcao != 3); // o loop continua enquanto a opção escolhida não for 3
    
    return 0;
    }

