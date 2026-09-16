// 6 Sequência de Fibonacci Aplicada
// Crie um programa que peça ao usuário um número inteiro N. O programa deve gerar e imprimir
// os N primeiros termos da Sequência de Fibonacci (onde os dois primeiros termos são 0 e 1, e os
// próximos são sempre a soma dos dois anteriores: 0, 1, 1, 2, 3, 5, 8, 13...).
// Sequência de Fibonacci Aplicada
// Crie um programa que peça ao usuário um número inteiro N. O programa deve gerar e imprimir
// os N primeiros termos da Sequência de Fibonacci (onde os dois primeiros termos são 0 e 1, e os
// próximos são sempre a soma dos dois anteriores: 0, 1, 1, 2, 3, 5, 8, 13...).
// Sequência de Fibonacci Aplicada (Versão Simplificada)
#include <stdio.h>

int main() {
    int n;
    int termo1 = 0, termo2 = 1, proximo;

    printf("==== Gerador da Sequencia de Fibonacci ====\n\n");
    printf("Digite a quantidade de termos (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um numero maior que zero.\n");
    } 
    // Se o usuário pedir apenas 1 termo, mostramos o zero
    else if (n == 1) {
        printf("Termos: %d\n", termo1);
    } 
    // Caso padrão (N >= 2)
    else {
        printf("Termos: %d, %d", termo1, termo2); // Imprime os dois primeiros fixos

        // O loop calcula direto a soma e roda (N - 2) vezes
        for (int i = 3; i <= n; i++) {
            proximo = termo1 + termo2;
            printf(", %d", proximo);

            // Atualiza os valores para a próxima soma
            termo1 = termo2;
            termo2 = proximo;
        }
        printf("\n");

    }

    return 0;
}
