// 8 Desenhando com asteriscos
// Escreva um programa que peça ao usuário para digitar o tamanho da base de um triângulo (um
// número inteiro). O programa deve usar laços de repetição aninhados (um dentro do outro) para
// desenhar um triângulo retângulo feito de asteriscos (*).
// Exemplo se a entrada for 4:
// *
// **
// ***
// ****
// Desenhando com asteriscos (Versão Mais Simples)
#include <stdio.h>

int main() {
    int base;

    printf("Digite o tamanho da base: ");
    scanf("%d", &base);

    for (int i = 1; i <= base; i++) { // laço da base
        
        for (int j = 1; j <= i; j++) {//laço astisco
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

