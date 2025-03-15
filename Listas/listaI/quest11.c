# include <stdio.h>
# include <stdlib.h>
// Questão 11: Receber preço, imprimir produto com desconto e o valor do desconto
void main() {
    float preco, preco_novo, desconto;

    printf("Digite o valor do produto desejado: \nR: ");
    scanf("%f", &preco);

    if (preco <= 30.0) {
        desconto = 0;
    }
    else if (preco > 30.0 && preco <= 100.0) {
        desconto = preco * 0.1;
    }
    else {
        desconto = preco * 0.15;
    }

    preco_novo = preco - desconto;

    printf("O valor do produto desejado é de: %.2f\nO desconto será de %.2f reais e o valor final fica de %.2f reais", preco, desconto, preco_novo);
}