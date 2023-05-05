#include<stdio.h>

int main() {
      
   int numero, maior, menor;

   printf("Digite um numero: ");
   scanf("%d", &numero);

   maior = numero;
   menor = numero;

    do {
     printf("Digite outro numero: ");
     scanf("%d", &numero);
     
    }while (numero <= 0);
    
    
    if (numero >= 0) {
     if (numero > maior) {
      maior = numero;
     }
     if (numero < menor) {
      menor = numero;
     }
        }
    
    
    printf("O maior numero foi: %d\n", maior);
    printf("O menor numero foi: %d\n", menor);

    

   


return 0;
}

