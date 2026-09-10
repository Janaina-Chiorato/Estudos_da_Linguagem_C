// Agora vamos aumentar um pouco a dificuldade: fazer uma calculadora 
// usando switch case, com:

// 1 - Somar
// 2 - Subtrair
// 3 - Multiplicar
// 4 - Dividir
#include <stdio.h>
int main(){
    int opcao;
    int numero1, numero2, resultado;
    printf("====== Vamos Calcular ======\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    printf("Digite outro numero: ");
    scanf("%d", &numero2);

    printf("1 - Somar\n 2 - Subtrair\n 3 - Multiplicacao\n 4 - Dividir\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        resultado = numero1 + numero2;
        printf("A soma de %d + %d = %d", numero1, numero2, resultado);
        break;
    case 2:
        resultado = numero1 - numero2;
        printf("A subtraca de %d - %d = %d", numero1, numero2, resultado);
        break;
    case 3:
        resultado = numero1 * numero2;
        printf("A multiplicacao de %d * %d = %d", numero1, numero2, resultado);
        break;
    case 4:
        resultado = numero1 / numero2;
        printf("A divisao de %d + %d = %d", numero1, numero2, resultado);
        break;
    
    default:
        printf("Operacao invalida");
        break;
    }



    return 0;
}