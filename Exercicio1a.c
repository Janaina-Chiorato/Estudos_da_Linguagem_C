/*Caixa Eletrônico (Cálculo de Cédulas) 
Desenvolva um programa que simule o saque de um caixa eletrônico. O usuário deve digitar um
valor inteiro a ser sacado. O programa deve calcular e exibir a menor quantidade possível de
notas de R$ 50, R$ 20, R$ 10 e R$ 5 necessárias para compor esse valor. 
Exemplo: Se o usuário pedir R$ 85, o programa deve informar: 1 nota de R$ 50, 1 nota de R$ 20,
1 nota de R$ 10 e 1 nota de R$ 5. Caso o valor digitado não possa ser sacado com as notas
disponíveis (ex: R$ 3), exiba uma mensagem de erro. 
*/
#include <stdio.h>
int main() {

    int saque, saqueInicial;
    int nota50, nota20, nota10, nota5;
    
    printf("Digite o valor a ser sacado:");
    scanf("%d", &saque);

    saqueInicial = saque;

    if (saque % 5 == 0){

        nota50 = saque /50;
        saque = saque % 50;

        nota20 = saque / 20;
        saque = saque % 20;

        nota10 = saque / 10;
        saque = saque % 10;

        nota5 = saque / 5;
        saque = saque % 5;

        printf("Para sacar R$ %d, serao necessarias:\n", saqueInicial);
        printf("%d nota(s) de R$ 50\n", nota50);
        printf("%d nota(s) de R$ 20\n", nota20);
        printf("%d nota(s) de R$ 10\n", nota10);
        printf("%d nota(s) de R$ 5\n", nota5);
    } else {
        printf("Valor invalido. O caixa nao pode entregar notas de R$ 5.\n");
    }

    return 0;
}