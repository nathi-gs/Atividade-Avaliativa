#include<stdio.h>
#include<locale.h>


int main() {
    
   int num, i;
     setlocale(LC_ALL, "Portuguese");
     
   printf("Digite um numero positivo: ");
   scanf("%d", &num);
   printf("Os divisores do numero %d são: ", num);
      
      
   for (i = 1; i <= num; i++) {
	if (num % i == 0) {
     printf("%d ", i);
        }
    }
    

       
return 0;
}
