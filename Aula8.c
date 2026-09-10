/* Introdução á switch case Exercicio com menu
Switch case é usado pra substituir if - else encadeados cada case tem 
um break.
Tipos de variaveis não suportados no case são float e double, strings
e estruturas (struct).
ele aceita variaveis do tipo inteiro ou integrais.*/
#include <stdio.h>
int main() {

    int opcao;
    printf("1 - Cadastrar\n2 - Consultar\n3 - sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

   switch (opcao){
    case 1:
        printf("Cadastro selecionado\n");
        break;
    case 2:
        printf("Consultar selecionada\n");
        break;
    case 3:
        printf("Encerra\n");
        break;
    default:
        printf("Opcao invalida\n");
   }

    return 0;
}