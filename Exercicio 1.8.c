#include <stdio.h>
/* 1.8 Receba o salário-base de um funcionário.
Calcule e imprima o salário a receber, sabendo se que esse funcionário tem uma gratificação de 5% sobre o salário base.*/

int main(){
    
    float salarioBase, gratificacao, resultadoTotal;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salarioBase);
    
    gratificacao = salarioBase * 0.05;
    resultadoTotal = salarioBase + gratificacao;
    
    printf("O salário total com gratificação é de %.2f", resultadoTotal);

    return 0;
}
