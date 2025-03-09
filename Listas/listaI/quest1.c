#include <stdio.h>
#include <stdlib.h>

// Questão 01: Receber duas notas, aprovado ou não?
void main() {
    int n1, n2; 
    float media;
    
    printf("Digite  a nota 1: ");
    scanf("%d", &n1);
    
    printf("Digite  a nota 2: ");
    scanf("%d", &n2);
    
    media = (n1 + n2)/2.0;
    
    if (media < 4) {
        printf("Reprovado\n");
    }
    else if (media >= 4 && media < 7) {
        printf("Prova Final\n");
    }
    else {
        printf("Aprovado\n");
    }
}
