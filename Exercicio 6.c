#include<stdio.h>
#include<locale.h>

int main() {
    
   int i, soma = 0;
     setlocale(LC_ALL, "Portuguese");
     
     
  for (i = 1; i < 1000; i++) {      
  if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

  printf("A soma de todos os números naturais abaixo de 1.000\nque são múltiplos de 3 ou 5 é: %d\n", soma);
  



return 0;
}


