#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    typedef struct{
        int codigo;
        char nome[20];
        float preco;
        int qtd;
    }produto;
    produto pr[5];
    int cod, qtd;

    for (int i = 0; i <= 4; i++){
        printf("\nDigite o seu codigo: ");
        scanf("%i", &pr[i].codigo);
        printf("\nDigite seu nome: ");
        fflush(stdin);
        gets(pr[i].nome);
        printf("\nDigite o preço: ");
        scanf("%f", &pr[i].preco);
        printf("\nDigite a Quantidade: ");
        scanf("%i", &pr[i].qtd);
    }
    
    printf("\nFaça seu pedido: \n");
    printf("\nDigite o codigo do produto desejado: ");
    scanf("%i", &cod);  
    printf("\nDigite a quantidade que você deseja: ");
    scanf("%i", &qtd); 

    for(int i = 0; i <= 4; i++){
        if(cod == pr[i].codigo){
            if(pr[i].qtd >= qtd){
                printf("\nCompra realizada com sucesso.");
            }else if(pr[i].qtd < qtd && pr[i].qtd > 0){
                printf("\nInfelizmente não temos o suficiente. Temos apenas: %i", pr[i].qtd);
            }else{
                printf("\nEstoque está zerado.");
            }
        }
    }  
}

