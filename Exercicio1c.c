/*Verificador de Ano Bissexto Completo
Peça para o usuário digitar um ano qualquer (número inteiro). O programa deve determinar se o
ano informado é bissexto ou não, exibindo uma mensagem correspondente. 
Regra de cálculo: Um ano é bissexto se for divisível por 4, mas não por 100, a menos que ele
também seja divisível por 400. Utilize operadores lógicos para resolver o problema em uma única
estrutura de decisão. 
*/

#include <stdio.h>
int main() {
    int ano;

    printf("Digite um ano qualquer: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("O ano %d eh bissexto.\n", ano);
    } else {
        printf("O ano %d nao eh bissexto.\n", ano);
    }
    
    return 0;
}