15 - Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu código, explicando o que faz cada uma das linhas.
#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
 return ( *(int*)a - *(int*)b );
}

int main()
{
   int n, i;
   float *vet;
   //Quantidade de itens a serem ordenados
   printf("Digite a quantidade de elementos do vetor\n");
   scanf("%d\n", &n);

   //Aloca memória
   vet = (float*)malloc(n*sizeof(int));

   //Definição do vetor
   for(i=0; i<n; i++){
       scanf("%f", &vet[i]);
   }

   //Ordenação pela função qsort
   qsort(vet,n,sizeof(int), compare);

   //Imprime função ordenada
   for(i=0; i<n; i++){
       printf("%f\n", vet[i]);
   }

   return 0;
}
