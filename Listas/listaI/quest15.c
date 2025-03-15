# include <stdio.h>
# include <stdlib.h>
// Questão 15: Receber horas extras, imprimir valor da gratificação
void main() {
    int extras, faltas;
    float gratif, premio;

    printf("Informe a quantidade de horas EXTRAS:\nR: ");
    scanf("%d", &extras);

    printf("Informe a quantidade de horas AUSENTES:\nR: ");
    scanf("%d", &faltas);

    premio = extras - (2.0 / 3.0 * faltas);

    if (premio > 2400) {
        gratif = 500.0;
    }
    else if (premio < 2400 && premio >= 1800) {
        gratif = 400.0;
    }
    else if (premio < 1800 && premio >= 1200) {
        gratif = 300.0;
    }
    else if (premio < 1200 && premio >= 600) {
        gratif = 200.0;
    }
    else {
        gratif = 100.0;
    }

    printf("\nParabéns! Sua gratificação é de %.2f", gratif);
}