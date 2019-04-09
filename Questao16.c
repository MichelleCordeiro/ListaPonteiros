#include <stdio.h>

void bubble(float* num, size_t n, size_t size,
            int (*compara)(float,float)){
    int i,j;
    float aux;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(compara(num[j],num[j+1])==-1){
                float aux=num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
            }
        }
    }
}

int compara (float * a, float * b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

int main()
{
    int n, i;
    float *vet;

    printf("Escolha um valor para n: ");
    scanf("%d", &n);

    vet = (float*)malloc(n*sizeof(int));

    for(i=0; i<n; i++){
        scanf("%f", &vet[i]);
    }

    bubble(vet, n, sizeof(float), compara);

    for(i = 0; i < n; i++){
        printf("%f ", vet[i]);
    }
    free(vet);
    return 0;
}
