# include <stdio.h>
# include <stdlib.h>

// Questão 17: Ler nome, idade, sexo. Imprimir uma resposta
void main() {
    char nome[30];
    int idade;
    char sexo;
    
    printf("Qual seu gênero? (F|M)");
    scanf("%c", &sexo);
    
    printf("Qual o seu nome? ");
    scanf("%s", nome);
    
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);
    
    
    if (idade < 18) {
        printf("MENOR");
    }
    else if (sexo == 'M' && idade > 65) {
        printf("APOSENTADO");
    }
    else if (sexo == 'F' && idade > 60) {
        printf("APOSENTADA");
    }
}
