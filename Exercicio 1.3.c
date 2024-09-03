#include <stdio.h>

//1.3 Peça ao usuário para digitar três números inteiros e o imprima a soma deles

int main(){
    
    int x, y, z;
    
    printf("Digite três números inteiros: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    
    printf("A soma dos produtos é: %d", x + y + z);

    return 0;
}
