// Exercício 3: Sistema de Triagem Hospitalar Avançado (Protocolo de Manchester)

// Enunciado: Desenvolva um programa que auxilie na triagem médica. O programa deve 
// solicitar ao usuário que informe a gravidade de 3 sintomas clássicos usando uma 
// escala de 0 (Ausente) a 3 (Grave):
// - Dor Torácica (int)
// - Dificuldade Respiratória (int)
// - Febre/Temperatura (int)

// Regras de Classificação:
// - Se a Dor Torácica FOR igual a 3 OU a Dificuldade Respiratória FOR igual a 3: 
//   Classificação "VERMELHA" (Emergência - Atendimento Imediato).
// - Se a Dor Torácica for 2 OU a Dificuldade Respiratória for 2, E a Febre for maior 
//   ou igual a 2: Classificação "LARANJA" (Muito Urgente - Até 10 minutos).
// - Se pelo menos um dos três sintomas for igual a 2 ou 3 (e não se enquadrar nas 
//   regras anteriores): Classificação "AMARELA" (Urgente - Até 60 minutos).
// - Se todos os sintomas forem menores ou iguais a 1, mas pelo menos um for igual a 1: 
//   Classificação "VERDE" (Pouco Urgente).
// - Se todos os sintomas forem 0: Classificação "AZUL" (Não Urgente).

// Saída do Programa:
// Exiba a cor da classificação do paciente e o tempo máximo de espera recomendado.
#include <stdio.h>
int main() {

    int dor_torax, def_respiar, febre;

    printf("---- Triagem Hospitalar ----\n\n");
    printf("Escala de dor 0 - Ausente a 3 - grave\n");

    printf("Digite o nivel de dor no Toracica em uma escala de (0 a 3): ");
    scanf("%d", &dor_torax);

    printf("Digite o nivel de Dificuldade respiratoria em uma escala de (0 a 3): ");
    scanf("%d", &def_respiar);

    printf("Digite o nivel de  no febre em uma escala de (0 a 3): ");
    scanf("%d", &febre);

    if(dor_torax >= 3 || def_respiar == 3){
        printf("Atendimento Imediato Emergencia\n Cor Vermelho");
    }
    else if((dor_torax == 2 || def_respiar == 2) && febre >= 2){ 
        printf("Atendimento Muito Urgente atendimento em 10min.\n Cor Laranja ");        
    }
    else if(dor_torax >= 2 || def_respiar >= 2 || febre >= 2){
        printf("Atendimento Urgente em ate 60min.\n Cor Amarela");
    }
    else if(dor_torax == 1|| def_respiar == 1 || febre == 1){
        printf("Atendimento pouco urgente.\n Cor Verde");
    }else{
        printf("Atendimente NAO Urgente.\n Cor Azul");
    }


    return 0;
}



