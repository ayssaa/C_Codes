# include <stdio.h>
# include <stdlib.h>
// Questão 13: Receber preço e imprimir origem
void main() {
    float preco;
    int codigo;

    printf("Qual o preço do produto?\nR: ");
    scanf("%f", &preco);

    printf("Qual o código de origem?\nR: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("A origem é: Sul\n");
            break;
        case 2:
            printf("A origem é: Norte\n");
            break;
        case 3:
            printf("A origem é: Leste\n");
            break;
        case 4:
            printf("A origem é: Oeste\n");
            break;
        case 5:
        case 6:
            printf("A origem é: Nordeste\n");
            break;
        default:
            if (codigo >= 7 && codigo <= 9) {
                printf("A origem é: Sudeste\n");
                break;
            }
            else if (codigo >= 10 && codigo <= 20) {
                printf("A origem é: Centro-Oeste\n");
                break;
            }
            else if (codigo >= 21 && codigo <= 30) {
                printf("A origem é: Nordeste\n");
            }
    }
}