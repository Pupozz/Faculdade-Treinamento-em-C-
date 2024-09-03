#include <stdio.h>
// 1.5 Leia quatro notas, calcule a média aritmética e imprima o resultado.

int main(){
    
    float nota1, nota2, nota3, nota4, media;
    
    printf("Digite 4 notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) /4.0;
    
    printf("%.2f\n", nota1);
    printf("%.2f\n", nota2);
    printf("%.2f\n", nota3);
    printf("%.2f\n", nota4);
    
    printf("A média aritmética é: %.2f", media);

    return 0;
}
