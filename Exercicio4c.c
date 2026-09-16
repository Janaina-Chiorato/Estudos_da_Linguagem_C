// Exercício 4: Tarifador de Estacionamento Rotativo Inteligente (Uso de Switch-Case)

// Enunciado: Escreva um programa em C que receba o Tipo de Veículo (um caractere) e 
// a Quantidade de Horas que o veículo permaneceu estacionado (int). Em seguida, peça 
// para o usuário informar o Período de Entrada usando um menu numérico com switch-case: 
// 1 - Manhã (06h às 12h), 2 - Tarde (12h às 18h - PICO), 3 - Noite (18h às 00h).

// Tipos de Veículo:
// - 'M' ou 'm': Motocicleta
// - 'C' ou 'c': Carro Passeio
// - 'V' ou 'v': Van / Utilitário

// Regras de Tarifação Base (por hora):
// - Motocicleta: R$ 5,00
// - Carro Passeio: R$ 10,00
// - Van: R$ 15,00

// Modificadores Compostos:
// - Se o veículo for Carro ou Van E o período for Tarde (Horário de Pico), acrescente 
//   uma taxa fixa extra de R$ 8,00 ao valor total.
// - Se o veículo for Motocicleta E o período for Noite, aplique um desconto de 20% 
//   no valor total da tarifa.
// - Se o tempo de permanência for superior a 5 horas, independentemente do veículo, 
//   conceda 10% de desconto sobre o valor bruto das horas antes das taxas.

// Saída do Programa:
// Exiba o detalhamento do cálculo e o valor total final a ser pago pelo motorista.
#include <stdio.h>
int main(){

    char tipo;
    int horas, opcao;
    float preco = 0, total = 0;

    printf("----- Tarifador de Estacionamento -----\n\n");
    printf("Qual o tipo de veiculo (m)- Moto, (c)- Carro e (v)- van/utilitario: ");
    scanf(" %c", &tipo); 

    printf("Qual foi a quantidade de horas: \n");
    scanf("%d", &horas);

    printf("===== PERIODO =====\n");
    printf("Escolha uma opcao\n 1 - Manha(06h as 12h)\n 2 - Tarde(12h as 18h - Pico)\n 3 - Noite(18h as 00h)\n");
    scanf("%d", &opcao);

    if (tipo == 'm' || tipo == 'M'){
        preco = 5.0;
    } 
    if (tipo == 'c' || tipo == 'C'){
        preco = 10.0;
    } 
    if (tipo == 'v' || tipo == 'V'){
        preco = 15.0; 

    total = preco * horas;

    
    if (horas > 5){
        total *= 0.90; 
    }

    switch (opcao){
        case 2:
            if(tipo != 'm' && tipo != 'M'){
                total += 8.0;
            }
            break;
        case 3:
            
            if(tipo == 'm' || tipo == 'M'){
                total *= 0.80;
            }
            break;
        
        default:
            
            printf("Opcao de periodo invalida!\n");
            break;
    }

    printf("\nTotal a pagar : R$ %.2f\n", total);
    return 0;
}
