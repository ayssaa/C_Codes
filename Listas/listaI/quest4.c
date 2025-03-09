# include <stdlib.h>
# include <stdio.h>

// Questão 04: Receber salario e imprimir salario reajustado
void main() {
    float salario_atual, salario_ajustado;
    
    printf("Informe o seu salário atual: ");
    scanf("%f", &salario_atual);
    
    if (salario_atual < 300.00) {
        salario_ajustado = salario_atual + (salario_atual *0.35);
    }
    else {
        salario_ajustado = salario_atual + (salario_atual *0.15);
    }
    
    printf("O salário ajustado é: %.2f", salario_ajustado);
}
