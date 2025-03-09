# include <stdio.h>
# include <stdlib.h>

// Questão 05: Receber saldo médio e imprimir o saldo e crédito
void main() {
    float saldo_medio, credito;
    
    printf("Digite seu valor de saldo médio: ");
    scanf("%f", &saldo_medio);
    
    if (saldo_medio < 200.0) {
        credito = saldo_medio * 0.1;
    }
    else if (saldo_medio > 200.0 && saldo_medio <= 300.0) {
        credito = saldo_medio * 0.2;
    }
    else if (saldo_medio > 300.0 && saldo_medio <= 400.0) {
        credito = saldo_medio * 0.25;
    }
    else {
        credito = saldo_medio * 0.3;
    }
    printf("O seu saldo médio é de %.2f reais e seu crédito é de %.2f reais", saldo_medio, credito);
}
