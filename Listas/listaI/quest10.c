# include <stdio.h>
# include <stdlib.h>
// Questão 10: Receber dados de dinheiro, devolver rendimento desse dinheiro
// Considerei Juros Simples e não Juros Compostos
void main() {
    int tipo, meses;
    float invest, valor;

    printf("Qual o valor do seu investimento?\nR: ");
    scanf("%f", &invest);

    printf("Quantos meses você quer deixar rendendo?\nR: ");
    scanf("%d", &meses);

    printf("Onde você vai aplicar?\n 1 - Poupança\n 2- Fundos de renda fixa\nR: ");
    scanf("%d", &tipo);

    if (tipo == 1) {
        valor = invest + (invest * 0.005 * meses);
    }
    else {
        valor = invest + (invest * 0.04 * meses); 
    }

    printf("Seu valor final será de: %f", valor);
}