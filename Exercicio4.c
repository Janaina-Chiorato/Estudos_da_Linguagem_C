// 1: Simulador de Sistema de Financiamento Imobiliário (SCORE + Renda)

// Enunciado: Escreva um programa em C que receba as seguintes entradas:
// - Renda mensal bruta do solicitante (float)
// - Valor total do imóvel (float)
// - Número de parcelas desejadas (int)
// - Score de crédito do cliente (int, de 0 a 1000)

// Regras de Negócio:
// 1. O valor da parcela mensal não pode ultrapassar 30% da renda mensal bruta.
// 2. Se o Score for menor que 400, o financiamento é REPROVADO imediatamente.
// 3. Se o Score estiver entre 400 e 699, o financiamento só é aprovado se o valor da 
//    parcela for de no máximo 20% da renda bruta (condição mais rigorosa).
// 4. Se o Score for de 700 ou mais, o financiamento é APROVADO, desde que respeite a 
//    regra padrão de 30% da renda.

// Saída do Programa:
// O programa deve calcular o valor da parcela (considere sem juros para simplificar: 
// Valor do Imóvel / Parcelas) e exibir o status final: "Financiamento Aprovado" ou 
// "Financiamento Recusado", justificando o motivo em caso de recusa (ex: "Score muito 
// baixo" ou "Comprometimento de renda excessivo").
#include <stdio.h>

int main() {
    float porcentagem_bruta1, porcentagem_bruta2; 
    float renda_mensal, valor_imovel;
    float parcela; 
    int parcelas, score;

    printf("--Simulador de Sistema de Financiamento Imobiliário (SCORE + Renda)--\n\n");
    printf("Qual eh a sua renda mensal bruta: "); 
    scanf("%f", &renda_mensal);

    printf("Qual eh o valor do imovel: ");
    scanf("%f", &valor_imovel);

    printf("Qual sera o numero de parcelas: ");
    scanf("%d", &parcelas);

    printf("Qual eh o seu score atual (0 - 1000): ");
    scanf("%d", &score); 

    parcela = valor_imovel / parcelas; // calculo das parcelas sem juros 

    printf("\n----- Analise de Credito -----\n"); 
    printf("Valor de cada parcela: R$ %.2f\n", parcela);

    porcentagem_bruta1 = renda_mensal * 0.30;
    porcentagem_bruta2 = renda_mensal * 0.20;

    
    if (score < 400) {
        printf("Status: Financiamento Recusado\nMotivo: Score muito baixo (menor que 400)\n");
    } 
    else if (score >= 400 && score <= 699) {
        // Para essa faixa de score, o limite é a porcentagem_bruta2 (20%)
        if (parcela > porcentagem_bruta2) {
            printf("Status: Financiamento Recusado\n");
            printf("Motivo: Comprometimento de renda excessivo para o seu perfil de score.\n");
            printf("A parcela de R$ %.2f superou o limite de 20%% da sua renda (R$ %.2f).\n", parcela, porcentagem_bruta2);
        } else {
            printf("Status: Financiamento Aprovado\nParabens!\n");
        }
    } 
    else {
        // Para score maior ou igual a 700, o limite é a porcentagem_bruta1 (30%)
        if (parcela > porcentagem_bruta1) {
            printf("Status: Financiamento Recusado\n");
            printf("Motivo: Comprometimento de renda excessivo.\n");
            printf("A parcela de R$ %.2f superou o limite de 30%% da sua renda (R$ %.2f).\n", parcela, porcentagem_bruta1);
        } else {
            printf("Status: Financiamento Aprovado\nParabens! Perfil de Score alto.\n");
        }
    }

    return 0;
}
