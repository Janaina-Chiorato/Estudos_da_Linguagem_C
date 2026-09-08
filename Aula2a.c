// Verificador de CPF sem usar laços de repetição
#include <stdio.h>
int main(){

    int d1, d2, d3, d4, d5, d6, d7, d8, d9; // 9 Primeiros digitos do CPF
    int soma1, soma2; // Variaveis para armazenar a soma dos produtos
    int resto1, resto2; // Variaveis para armazenar o resto da divisao
    int digito1, digito2; // Variaveis para armazenar os digitos verificadores

    printf("Digite o primeiro digito do CPF: ");
    scanf("%d", &d1);

    printf("Digite o segundo digito do CPF: ");
    scanf("%d", &d2);

    printf("Digite o terceiro digito do CPF: ");
    scanf("%d", &d3);

    printf("Digite o quarto digito do CPF: ");
    scanf("%d", &d4);

    printf("Digite o quinto digito do CPF: ");
    scanf("%d", &d5);

    printf("Digite o sexto digito do CPF: ");
    scanf("%d", &d6);

    printf("Digite o sétimo digito do CPF: ");
    scanf("%d", &d7);

    printf("Digite o oitavo digito do CPF: ");
    scanf("%d", &d8);

    printf("Digite o nono digito do CPF: ");
    scanf("%d", &d9);

    soma1 = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + (d6 * 5) + (d7 * 4) + (d8 * 3) + (d9 * 2);
    resto1 = soma1 % 11;
    if (resto1 < 2) {
        digito1 = 0;
    } else {
        digito1 = 11 - resto1;
    }

    soma2 = (d1 * 11) + (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + (d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (digito1 * 2);
    resto2 = soma2 % 11;
    if (resto2 < 2) {
        digito2 = 0;
    } else {
        digito2 = 11 - resto2;
    }

    printf("Digitos verificadores: %d %d\n", digito1, digito2);

    return 0;
}