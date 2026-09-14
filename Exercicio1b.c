/*Cálculo de Imposto de Renda Retido na Fonte (IRRF)
Escreva um programa que receba o salário bruto de um funcionário. O programa deve calcular o
imposto de renda devido com base nas seguintes faixas progressivas: 
• Até R$ 2.000,00: Isento (0% de imposto).
• De R$ 2.001,00 a R$ 4.000,00: 15% sobre a parcela que exceder R$ 2.000,00.
• Acima de R$ 4.000,00: 22.5% sobre a parcela que exceder R$ 4.000,00 + o imposto fixo da
faixa anterior (R$ 300,00).
Ao final, exiba de forma organizada: o salário bruto, o valor exato do imposto retido e o salário
líquido resultante. */

#include <stdio.h>
int main() {

    float salario;
    float salarioLiquido;
    float imposto = 0;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);

    if (salario <= 2000){
        imposto = 0;
        salarioLiquido = salario - imposto;
    }
    else if (salario <= 4000){
        imposto = salario * 0.15;
        salarioLiquido = salario - imposto;
    } else{
        imposto = (salario * 0.225) + 300;
        salarioLiquido = salario - imposto;
    }
    printf("===== Calculo de Imposto(IRRF) =====\n");
    printf("Salario Bruto: R$ %.2f\n", salario);
    printf("Imposto Retido: R$ %.2f\n", imposto);   
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);
    return 0;
}