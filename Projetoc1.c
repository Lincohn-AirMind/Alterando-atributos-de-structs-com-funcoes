#include <stdio.h>
struct Produto {
    char nome[11];
    int qt;
};

void comprar(struct Produto *produto){
printf("Quantidade que tem : %d\n", produto->qt);
printf("Quantidade a ser comprada : \n ");
int compraqt;
scanf("%d", &compraqt);

produto->qt = produto->qt - compraqt;

printf("Produto : %s \n Quantidade : %d", produto->nome,produto->qt);

}

void CriarProduto(struct Produto *produto ){
    fflush(stdin);
    printf("Digite a quantidade do produto:\n");
    scanf("%d",&produto->qt);

char termo;
for(int i = 0; i<10; i++){
    printf("Digite as letras do nome do produto:\n");
    scanf(" %c",&termo);
    if(termo=='0'){
produto->nome[i]='\0';
break;
    }
    produto->nome[i]=termo;
} 
printf("Nome : %s \n Quantidade : %d \n", produto->nome, produto->qt);
}


int main(){
struct Produto produto1;

CriarProduto(&produto1);
comprar(&produto1);


    return 0;
}