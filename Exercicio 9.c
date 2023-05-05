#include<stdio.h>
#include<locale.h>

int main() {
    
   int opcao, quantidade;
   float valorTotal = 0;
    setlocale(LC_ALL, "Portuguese");
  
  do {
    printf("\nMenu de frutas:\n");
    printf("1 - Abacaxi - R$ 5,00 a unidade\n");
    printf("2 - Maçã - R$ 1,00 a unidade\n");
    printf("3 - Pera - R$ 4,00 a unidade\n");
    printf("0 - Finalizar compra\n");
    printf("\nDigite o numero da fruta que deseja comprar: ");
    scanf("%d", &opcao);
    
    


  switch (opcao) {
    case 1:
        printf("Digite a quantidade de abacaxis: ");
        scanf("%d", &quantidade);
            valorTotal = quantidade * 5.0;break;
    case 2:
        printf("Digite a quantidade de maçãs: ");
        scanf("%d", &quantidade);
                valorTotal = quantidade * 1.0;break;
    case 3:  
        printf("Digite a quantidade de peras: ");
        scanf("%d", &quantidade);
                valorTotal = quantidade * 4.0;break;
    default:
        printf("Opção invalida!\n");break;
        
}

} while (opcao != 0);

    system("cls");

    printf("\nO valor total da compra foi de: R$ %.2f\n", valorTotal);


return 0;
}

