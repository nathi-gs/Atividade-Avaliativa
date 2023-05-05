#include <stdio.h>
#include<locale.h>

int main() {
    
   float raio, volume, area, PI=3.14159;
      setlocale(LC_ALL, "Portuguese");

   printf("Digite o valor do raio: ");
   scanf("%f", &raio);
   

    volume = (4.0/3) * PI * raio * raio * raio; 
    area = 4 * PI * raio * raio; 

    printf("Volume da esfera: %.4f\n", volume); 
    printf("Área da superfície da esfera: %.4f\n", area); 




    return 0;
}
