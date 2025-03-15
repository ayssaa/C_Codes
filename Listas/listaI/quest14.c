# include <stdio.h>
# include <stdlib.h>
// Questão 14: Receber preço, categoria, situação e imprimir:
void main () {
    float preco, preco_novo, aumento;
    float imposto = 0;
    int categoria;
    char situacao;

    printf("Digite o preço do produto:\nR: ");
    scanf("%f", &preco);

    printf("Digite a categoria do produto:\n1 - Limpeza\n2 - Alimentação\n3 - Vestuário\nR: ");
    scanf("%d", &categoria);

    printf("Digite a situação do produto:\nR - Produto que necessita de refrigeração\nN - Produto que não precisa de refrigeração\nR: ");
    scanf(" %c", &situacao);

    if (preco <= 25.0) {
        switch (categoria) {
            case 1:
                aumento = preco * 0.05;
                break;
            case 2:
                aumento = preco * 0.08;
                break;
            case 3:
                aumento = preco * 0.1;
                break;
        }
    }

    else {
        switch (categoria) {
            case 1:
                aumento = preco * 0.12;
                break;
            case 2:
                aumento = preco * 0.15;
                break;
            case 3:
                aumento = preco * 0.18;
                break;
        }
    }

    // Letra A: imprimir o valor do aumento
    printf("O valor do aumento desse produto é: %.2f\n", aumento);

    if (categoria == 2 || situacao == 'R') {
        imposto = preco * 0.05;
    }
    else {
        imposto = preco * 0.08;
    }

    // Letra B: imprimir o valor do imposto
    printf("O imposto desse produto é: %.2f\n", imposto);

    preco_novo = preco + aumento + imposto;
// Letra C: imprimir o valor novo
    printf("O valor novo do produto será: %.2f\n", preco_novo);

    if (preco_novo <= 50.0) {
        printf("A classificação desse produto é: Barato");
    }

    else if (preco_novo > 50.0 && preco_novo < 120.0) {
        printf("A classificação desse produto é: Normal");
    }
    else {
        printf("A classificação desse produto é: Caro");
    }
}