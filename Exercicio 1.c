#include<stdio.h>

int main(){
	
	int A, B, C, D, diferenca; 
	
    printf("Digite um a valor para A: ");
	scanf("%d", &A);
	printf("Digite um a valor para B: ");
	scanf("%d", &B);
	printf("Digite um a valor para C: ");
	scanf("%d", &C);
	printf("Digite um a valor para D: ");
	scanf("%d", &D);
	
	system("cls");
	
	diferenca = (A * B - C * D);
	
	printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D );
	printf("DIFERENCA = %d", diferenca);
	
	return 0;
	
}
