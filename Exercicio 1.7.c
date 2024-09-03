#include <stdio.h>
// 1.7 Leia um número inteiro e imprima o seu antecessor e seu sucesso.

int main(){
    
    int x, antecessor, sucessor;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    
    antecessor = x - 1;
    sucessor = x + 1;
    
    printf("O antecessor deste número é %d e o sucessor é %d", antecessor, sucessor);

    return 0;
}
