// 7. Analisador de Números Primos
// Desenvolva um programa que receba um número inteiro positivo do usuário. Utilizando uma
// estrutura de repetição, verifique se o número digitado é primo (divisível apenas por 1 e por ele
// mesmo) ou composto. Exiba uma mensagem direta na tela informando o resultado.
#include <stdio.h>
int main() {

    int num;
    int divisores = 0;
    int i = 1;

    printf("----- Analisador de Numeros primos -----\n\n");
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 1){ // validação 
        printf("O numero %d nao eh primo nem composto.\n", num);
    }else{
        while (i <= num){ // 
            if(num % i == 0){
                divisores ++; // se o resto for 0 enconta um divisor
            }
            i++; // incrementa o contador    
        }
        if (divisores == 2){
            printf("O numero %d en Primo! \n", num);
        }else{
            printf("O numero %d eh COMPOSTO! (Possui %d divisores)\n", num, divisores);
        }        
    }
    
    return 0;
}