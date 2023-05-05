#include<stdio.h>

int main() {
    
   int n, i, primeiro_termo = 0, segundo_termo = 1, proximo_termo;


   printf("Digite o valor de n: ");
   scanf("%d", &n);

   system("cls");

   if (n == 0) {
    printf("O enesimo termo da sequencia de Fibonacci e: 0\n");
    }
   else if (n == 1) {
    printf("O enesimo termo da sequencia de Fibonacci e: 1\n");
    } 
   else {
        
	for (i = 2; i <= n; i++) {
            proximo_termo = primeiro_termo + segundo_termo;
            primeiro_termo = segundo_termo;
            segundo_termo = proximo_termo;
        }
           
     printf("O enesimo termo da sequencia de Fibonacci e: %d\n", segundo_termo);
    }

 
 
return 0;
}
