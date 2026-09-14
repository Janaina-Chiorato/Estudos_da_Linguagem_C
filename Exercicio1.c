/*Crie um programa em C que leia três valores reais representando os lados de um triângulo.
Primeiro, o programa deve verificar se esses lados podem efetivamente formar um triângulo (a
soma de dois lados deve ser sempre maior que o terceiro). Caso formem, classifique-o e exiba
uma mensagem na tela indicando se ele é: 
• Equilátero: Todos os três lados são iguais.
• Isósceles: Dois lados são iguais e um é diferente.
• Escaleno: Todos os três lados são diferentes. 
Se os lados informados não puderem formar um triângulo, o programa deve exibir uma mensagem
de erro*/

#include <stdio.h>
    int main() {
        int ladoA, ladoB, ladoC;
        int soma1, soma2;

        printf("Digite o primeiro lado do triangulo: ");
        scanf("%d", &ladoA);

        printf("Digite o segundo lado do triangulo: ");
        scanf("%d", &ladoB);

        printf("Digite o terceiro lado do triangulo: ");
        scanf("%d", &ladoC);

        soma1 = ladoA + ladoB;
        soma2 = ladoA + ladoC;

        if (soma1 > ladoC && soma2 > ladoA){

            if (ladoA == ladoB && ladoB == ladoC){
                printf("Equilatero: Todos os tres lados sao iguais.\n");
            }
            else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
                printf("Isoaceles: Dois lados sao iguais e um eh diferente.\n");
            }
            else {
                printf("Escaleno: Todos os tres lados sao diferentes.\n");
            }
        }else{
            printf("Erro: Os lados informados nao podem formar um triangulo.\n");
        }
    return 0;
    }
    



