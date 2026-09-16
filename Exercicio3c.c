// 4.Controle de Estoque de Loja
// Desenvolva um programa que exiba um menu repetitivo com as seguintes opções: 1 - Adicionar
// Item, 2 - Remover Item, 3 - Exibir Saldo Atual e 4 - Sair. O programa deve começar com um
// estoque de 100 itens. Cada vez que o usuário escolher 1 ou 2, o programa deve pedir a
// quantidade e atualizar o estoque. O menu deve continuar aparecendo até que a opção 4 seja
// selecionada.
#include <stdio.h>
int main(){

    int opcao, valor;
    int estoque = 100;

    do{
        printf("---- Controle de estoque ----\n");
        printf("(1)- Adicionar item \n");
        printf("(2)- Remover item \n");
        printf("(3)- Exibir saldo atual do estoque \n");
        printf("(4)- Sair\n");

        scanf("%d", &opcao);

        if (opcao == 1){
            printf("Digite o valor que vai adicionar: ");
            scanf("%d", &valor);
            
            if (valor > 0){
                estoque = estoque + valor;
            }
        }
        else if (opcao == 2){
            printf("Digite o valor que vai remover: ");
            scanf("%d", &valor);
            
            if (valor > 0 && valor <= estoque){
                estoque = estoque - valor;
            }else{
                printf("Quantidade invalida ou superior ao estoque.\n");
            }
        }
        else if(opcao == 3){
            printf("Saldo atual: %d itens\n", estoque);
        }    
        else if(opcao == 4 ){
            printf("Programa encerrado");
        }
        else{
            printf("Opçao Invalida! Tente Novamente\n");
        }
    }while(opcao != 4);
    return 0;
}