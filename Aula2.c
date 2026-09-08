// Operadores aritmeticos 
#include <stdio.h>
int main(){
    int num1, num2;
    int soma;
    int subtracao;
    int multiplicacao;
    float divisao;
    int resto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o Segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = (float)num1 / num2;
    resto = num1 % num2;

    printf("==== Resultado das operacoes ====\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);
    printf("Resto: %d\n", resto);

    return 0;
}