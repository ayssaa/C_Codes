# include <stdio.h>
# include <stdlib.h>

// Questão 02: Receber dois números e mostrar o menor
void main() {
    int n1, n2;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    
    printf("Digite outro número: ");
    scanf("%d", &n2);
    
    if (n1 < n2) {
        printf("O menor número é %d", n1);
    }
    else {
        printf("O menor número é %d", n2);
    }
}
