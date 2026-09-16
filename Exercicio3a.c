// 2. Validação de Acesso
// Crie um programa que defina uma senha numérica interna (ex: 2026). O programa deve pedir
// para o usuário digitar a senha. Se ele errar, exiba "Senha Inválida! Tente novamente" e peça o
// dado de novo. O programa só deve parar quando a senha correta for digitada ou quando o
// usuário atingir o limite de 3 tentativas erradas, exibindo a mensagem correspondente ("Acesso
// Permitido" ou "Conta Bloqueada"). 
#include <stdio.h>

int main(){
    int senha_permitida = 2026; // senha interna 
    int senha;
    int tentativa = 0;

    printf("---- SISTEMA DE VALIDACAO DE SENHA ----\n");
    
    while(tentativa < 3){
        printf("Digite a senha (RESTAM %d TENTATIVAS): ", 3 - tentativa);
        scanf("%d", &senha);
        tentativa++; 

        if(senha == senha_permitida){
            printf("\nAcesso permitido!\n");
            return 0; // encerra o programa imediatamente aqui se acertar a senha
        } else {
            if(tentativa < 3){
                printf("Senha invalida! Tente novamente.\n\n");
            }           
        }

    } 
    // Esta linha só será executada se o loop terminar sem acertar a senha
    printf("\nConta Bloqueada!\n");
    return 0;   
}
