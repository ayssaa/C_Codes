# include <stdio.h>
# include <stdlib.h>
// Questão 09: Receber um salário, mostrar novo salario
void main() {
    float salario;

    printf("Digite seu salário atual: ");
    scanf("%f", &salario);

    if (salario <= 300.0) {
        salario += salario * 0.5;
    }
    else if (salario > 300.0 && salario <= 500.0) {
        salario += salario * 0.4;
    }
    else if (salario > 500.0 && salario <= 700.0) {
        salario += salario * 0.3;
    }
    else if (salario > 700.0 && salario <= 800.0) {
        salario += salario * 0.2;
    }
    else if (salario > 800.0 && salario <= 1000.0) {
        salario += salario * 0.1;
    }
    else {
        salario += salario * 0.05;
    }

    printf("Seu salario atual é: %f", salario);
}