// Escreva um programa que:
// Leia um inteiro n . Imprima todos os números de n até 1 (contagem
// regressiva).]
# include <stdio.h>
int main(){
    int n = 0;

    printf("Digite um numero inteiro possitivo:\n ");
    scanf("%d", &n);

// verificação 

    if(n < 1){
        printf("Por favor, digite um numero maior ou igual a 1.\n");
    }
    else{
      printf("=== Contagem Regressiva ===\n");  
    }
    
    while(n >= 1){

        printf("%d\n", n);
        n = n - 1; // mesmo que n--
    }
    return 0;
}