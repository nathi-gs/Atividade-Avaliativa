#include <stdio.h>

int main() {
    
   int numeros[10], i, soma = 0;
   float media;
   
   
   for(i = 0; i < 10; i++) {
    printf("Digite o %d numero: ", i+1);
    scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;


    printf("A media dos numeros e: %.2f", media);



return 0;
}
