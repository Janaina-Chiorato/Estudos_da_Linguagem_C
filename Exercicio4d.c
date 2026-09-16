/*Exercício 5: Validador de Elegibilidade de Passagens Aéreas e Conexões (Visto/Vacina)
--------------------------------------------------------------------------------
Contexto: Sistemas de check-in internacional validam regras rígidas de trânsito 
aeroportuário combinando o destino, escalas e documentos.

Enunciado: Escreva um programa que simule o pré-embarque de um passageiro. 
O programa deve ler o código do Continente de Destino usando um menu switch-case:
1 - América do Norte | 2 - Europa | 3 - Ásia

Depois, o programa deve fazer três perguntas booleanas (use 1 para Sim e 0 para Não):
- Possui passaporte válido? (int)
- Possui visto aprovado para o destino? (int)
- Comprovante de vacinação internacional em dia? (int)

Regras de Elegibilidade Combinadas:
- Para qualquer destino, se não possuir passaporte válido, o embarque é "NEGADO" 
  imediatamente.
- Caso 1 (América do Norte): Exige Passaporte VÁLIDO E Visto APROVADO E Vacinação EM DIA.
- Caso 2 (Europa): Exige Passaporte VÁLIDO e Vacinação EM DIA. O visto NÃO é 
  obrigatório (isento para turismo).
- Caso 3 (Ásia): Exige Passaporte VÁLIDO E (Visto APROVADO OU Vacinação EM DIA - 
  caso o país de parada aceite teste alternativo).

Saída do Programa:
Exiba o status final: "Embarque Autorizado" ou "Embarque Negado", detalhando qual 
documento ou requisito impediu a viagem.*/
#include <stdio.h>

int main() {
    int destino, passaporte, visto, vacina, elegivel = 0;

    
    printf("1-America do Norte | 2-Europa | 3-Asia: "); 
    scanf("%d", &destino);

    printf("Tem Passaporte? (1-Sim/0-Nao): ");       
    scanf("%d", &passaporte);

    printf("Tem Visto? (1-Sim/0-Nao): ");             
    scanf("%d", &visto);

    printf("Tem Vacina? (1-Sim/0-Nao): ");            
    scanf("%d", &vacina);

    
    if (passaporte == 0) {
        printf("\nEmbarque Negado: Falta Passaporte Valido.\n");
        return 0;
    }

    
    switch (destino) {
        case 1: elegivel = (visto == 1 && vacina == 1); 
        break; // Exige os dois

        case 2: elegivel = (vacina == 1);              
        break; // Exige só vacina
        
        case 3: elegivel = (visto == 1 || vacina == 1); 
        break; // Exige visto OU vacina
    }

    
    if (elegivel == 1) {
        printf("\nEmbarque Autorizado! Boa viagem.\n");
    } else {
        printf("\nEmbarque Negado: Requisitos do continente nao preenchidos.\n");
    }

    return 0;
}
