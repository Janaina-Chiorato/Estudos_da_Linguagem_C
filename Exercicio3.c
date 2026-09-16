//1. O Contador de Passos
// Escreva um programa que use uma estrutura de repetição para ler a quantidade de passos dados
// em cada minuto (totalizando 10 entradas). Ao final, o programa deve exibir o total de passos
// acumulados e a média de passos por minuto.

#include <stdio.h>
int main(){

    int passos;
    int total = 0;
    float media;

    
    for(int i = 0; i<10; i++){
        printf("Digite a quantidade de passos por minuto:\n ");
        scanf("%d", &passos);

        total = total + passos; //acumulador 
        media = total / 10.0; // calculoda media 
    }
   

    printf("Resultado da Consultoria de corrida!\n");
    printf("O total de passos acumulados eh %d\n", total);
    printf("A media de passos foi %.2f\n", media);
 
    return 0;

}