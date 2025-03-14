# include <stdio.h>
# include <stdlib.h>
// Questão 08: Receber preço, mostrar preço novo
void main() {
    float preco_atual, preco_novo;

    printf("Digite o preço atual do produto: ");
    scanf("%f", &preco_atual);

    if (preco_atual <= 50.0) {
        preco_novo = preco_atual + (preco_atual * 0.05);
    }
    else if (preco_atual > 50.0 && preco_atual <= 100) {
        preco_novo = preco_atual + (preco_atual * 0.1);
    }
    else {
        preco_novo = preco_atual + (preco_atual * 0.15);
    }

    printf("O preço novo é de %f reais\n", preco_novo);

    if (preco_novo <= 80.0) {
        printf("Sua classificação é: Barato");
    }

    else if (preco_novo > 80.0 && preco_novo <= 120.0) {
        printf("Sua classificação é: Normal");
    }

    else if (preco_novo > 120.0 && preco_novo <=200.0) {
        printf("Sua classificação é: Caro");
    }

    else {
        printf("Sua classificação é: Muito Caro");
    }

}