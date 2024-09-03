
#include <stdio.h>
// 1.4 leia um número real e imprima o resultado do quadrado desse número
int main(){
    
    float numero;
    float quadrado;
    
    printf("Digite um número real: ");
    scanf("%f", &numero);

    quadrado = numero * numero;

    printf("O quadrado de %.2f é %.2f\n", numero, quadrado);

    return 0;
}
