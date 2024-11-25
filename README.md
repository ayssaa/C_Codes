# C_Codes
Aprendendo C



Só salvando:
#include <stdio.h>
#include <stdlib.h>
void main() {
    
    // Definindo as variáveis:
    int num_conta, cTotal=0 , cTotalNeg=0;
    // num_conta: Número da conta
    // cTotal: Total de clientes
    // num_conta: Total de clientes negativados
    float saldo, somatorio=0;
    // saldo: saldo do cliente
    // somatorio: saldo da agência
    char nome[30];
    // Criando uma variável nome de no máximo 30 caractéres
    
    // Recebendo os Dados (entrada = numconta,nome,saldo)
    printf("Digite o numero da conta: (ou -999 para finalizar)\n");
    scanf("%d", &num_conta);
    // Esse "%d" significa que o scan receberá um inteiro e armazenará em conta
    while (num_conta > 0 && cTotal < 10000) {
        printf("Nome:");
        scanf("%s", nome);
        printf("Saldo:");
        scanf("%f", &saldo);
        somatorio += saldo;
        cTotal++;
        if (saldo <0){
            cTotalNeg++;
            printf("%d - %f - negativo \n", num_conta, saldo);
        }
        else{
            printf("%d - %f - positivo \n", num_conta, saldo);
        }
        printf("Digite o numero da conta: (ou -999 para finalizar)\n");
        scanf("%d", &num_conta);
    }
    printf("\n Total de clientes negativos: %d", cTotalNeg);
    printf("\n Total de clientes da agência: %d", cTotal);
    printf("\n Total do saldo da agência: %f", somatorio);
}
