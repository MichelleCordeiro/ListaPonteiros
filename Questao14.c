14 - Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para realizar a tarefa.
#include <stdio.h>
#include <stdlib.h>

void bubble(float num[], int n){
   int i, j;

   for(i=0; i<n-1; i++){
       for(j=0; j<n-i-1; j++){
           if(num[j]>num[j+1]){
               float aux=num[j];
               num[j]=num[j+1];
               num[j+1]=aux;
           }
       }
   }
}

int main(){
   int n, i;
   float *vet;
   printf("Digite a quantidade de elementos do vetor\n");
   scanf("%d\n", &n);

   vet = (float*)malloc(n*sizeof(int));

   for(i=0; i<n; i++){
       scanf("%f", &vet[i]);
   }
   bubble(vet, n);

   for(i=0; i<n; i++){
       printf("%f\n", vet[i]);
   }


   return 0;
}
