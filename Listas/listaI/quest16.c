# include <stdio.h>
# include <stdlib.h>
// Questão 16: Receber 3 medidas, imprimir se podem representar um triângulo
void main () {
    int n1, n2, n3;

    printf("Digite três medidas: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < n2 + n3 && n2 < n3 + n1 && n3 < n1 + n2) {
        printf("Podem ser um triângulo! :D");
    }
    else {
        printf("Não é triângulo!");
    }
}