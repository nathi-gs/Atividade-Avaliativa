#include <stdio.h>

int main() {
    
   float x, y;

   
   printf("Digite as coordenadas x e y de um ponto: ");
   scanf("%f %f", &x, &y);

   system("cls");

    if (x == 0 && y == 0){
     printf("O ponto pertece a Origem\n");
    } 
    else if (x == 0){
     printf("O ponto pertece ao Eixo Y\n");
    } 
	else if (y == 0){
     printf("O ponto pertece ao Eixo X\n");
    } 
    else if (x > 0 && y > 0){
     printf("O ponto pertece a Q1\n");
    }
	else if (x < 0 && y > 0){
     printf("O ponto pertece a Q2\n");
    }
    else if (x < 0 && y < 0){
     printf("O ponto pertece a Q3\n");
    } 
	else{
	 printf("O ponto pertece a Q4\n");
    }


       
return 0;
}
