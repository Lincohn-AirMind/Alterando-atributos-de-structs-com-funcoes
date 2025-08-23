#include <stdio.h>

int main()
{//cria um vetor do tipo int com cinco posições.
int vint[5]={1,2,3,4,5};
//cria um laço for que vai percorrer cada posição do vetor.
for(int i=0; i < 5; i++){
//cria um ponteiro p para cada posição do vetor.
int *p=&vint[i];
//efetua uma conta com base no conteúdo do ponteiro e armazena em res.
int res = *p + 10;
//saída de dados com quebra de linha.
printf("%p\n", *p);

printf("resultado : %d ", res);
}
    return 0;
}