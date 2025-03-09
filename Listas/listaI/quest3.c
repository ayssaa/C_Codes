# include <stdio.h>
# include <stdlib.h>

// Questão 03: Receber 2 números e executar uma operação
void main() {
    int n1, n2, opcao;
    float resultado;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    
    printf("Digite outro número: ");
    scanf("%d", &n2);
    
    printf("\n1 - média entre os números\n");
    printf("2 - diferença do maior pelo menor\n");
    printf("3 - produto entre os números\n");
    printf("4 - divisão entre os números\n");
    printf("Escolha uma operação: \n");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            resultado = (n1 + n2) / 2.0;
            break;
        case 2:
            if (n1 > n2) {
                resultado = n1 - n2;
            }
            else {
                resultado = n2 - n1;
            }
            break;
        case 3:
            resultado = n1 * n2;
            break;
        case 4:
            resultado = n1 / n2;
            break;
    }
    printf("O resultado é %f", resultado);
}
