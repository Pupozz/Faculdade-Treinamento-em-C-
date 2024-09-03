#include <stdio.h>

//1.6 Leia um Valor em real e a cotação do dólar. Em seguida, imprima o valor corresponde em dólares
int main(){
    
    float Valor, cotacaoDolar, real;
    
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &real);
    
    cotacaoDolar = 5.54;
    Valor = real * cotacaoDolar;
    
    printf("O valor de R$ %.2f convertido é US$ %.2f", real, Valor);

    return 0;
}
