# include <stdio.h>
# include <stdlib.h>
// Questão 12: Receber gênero e altura, imprimar o peso ideal
void main() {
    float altura, peso;
    char genero;

    printf("Digite seu gênero: (F/M)\nR: ");
    scanf(" %c", &genero);

    printf("Digite sua altura:\nR: ");
    scanf("%f", &altura);

    if (genero == 'F') {
        peso = (62.1 * altura) - 44.7;
    }
    else {
        peso = (72.7 * altura) - 58;
    }

    printf("O seu peso ideal é de: %f", peso);
}