#include <stdio.h>
/* 1.9 Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
 1.9.1 O total a pagar com desconto de 10%;
 1.9.2 O valor de cada parcela, no parcelamento de 3% sem juros;
 1.9.3 A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
 1.9.4 A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/
int main() {
    float valorTotal, valorDesconto, valorParcela, comissaoAVista, comissaoParcelada;

    printf("Digite o valor total da venda: ");
    scanf("%f", &valorTotal);

    valorDesconto = valorTotal * 0.90;
    printf("Total a pagar com desconto de 10%%: %.3f\n", valorDesconto);

    valorParcela = valorTotal / 3;
    printf("Valor de cada parcela (em 3x sem juros): %.3f\n", valorParcela);

    comissaoAVista = valorDesconto * 0.05;
    printf("Comissão do vendedor (venda à vista): %.3f\n", comissaoAVista);

    comissaoParcelada = valorTotal * 0.05;
    printf("Comissão do vendedor (venda parcelada): %.3f\n", comissaoParcelada);

    return 0;
}

