#include <stdio.h>
#include <math.h>

int main() {
    
   float x1, y1, x2, y2, distancia;

   printf("Digite os valores de 1 (x1, y1): ");
   scanf("%f %f", &x1, &y1);
   printf("Digite as coordenadas do ponto 2 (x2, y2): ");
   scanf("%f %f", &x2, &y2);

   distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

   printf("A entres eles vai ser de: %.4f\n", distancia);


return 0;
}

