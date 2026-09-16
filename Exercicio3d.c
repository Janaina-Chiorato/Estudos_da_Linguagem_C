// 5. O Investimento de Longo Prazo
// Escreva um programa que receba um valor inicial investido, uma taxa de juros anual (em %) e a
// quantidade de anos que o dinheiro ficará rendendo. Utilizando um laço, calcule e exiba o saldo
// da conta ano a ano, mostrando o crescimento do patrimônio.
#include <stdio.h>
int main() {

    int quant_anos = 0;// Tempo
    float taxa, taxa_anual;// Taxa anual
    float valor_inicial;// Capital inicial
    float valor_final; // Montante

    printf("==== Simulador de Investimentos ====\n\n");
    
    printf("Qual sera o seu capital inicial: \n");
    scanf("%f", &valor_inicial);

    printf("Qual eh a taxa de juros anual: \n");
    scanf("%f", &taxa_anual);

    printf("Quantos anos o seu capital vai ficar rendendo: \n");
    scanf("%d", &quant_anos);

        if(valor_inicial > 0 && taxa_anual > 0 && quant_anos > 0){

            taxa = taxa_anual /100; // converção para decimal 
            valor_final = valor_inicial; // o valor final começa igaul ao inicial

            printf("=== Evolucao Ano a Ano ===\n");

            for(int i = 1; i <= quant_anos; i++){

                valor_final = valor_final * (1 + taxa); // calculando os juros compostos

                printf("Ano %d: R$ %.2f\n", i, valor_final);
            }

        }else{
            printf("Erro: verifique que o valor inicial, a taxa e anos sao maiores que Zero\n");
    }
    return 0;
}