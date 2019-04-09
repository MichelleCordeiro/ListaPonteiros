6 - Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);
    printf("vet[%d] = %.1f",i, vet[i]);
    printf("*(f + %d) = %.1f",i, *(f+i));
    printf("&vet[%d] = %X",i, &vet[i]);
    printf("(f + %d) = %X",i, f+i);
  }
}
O i imprime o índice do vetor, vet[i] imprime o valor do vetor, *(f + i) também imprime o valor do vetor, &vet[i] imprime o endereço de cada posição do vetor e f + i também imprime o endereço de cada posição do vetor.

a) i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 7DFE70 (f + 0) = 7DFE70
b) i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 7DFE74 (f + 1) = 7DFE74
c) i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 7DFE78 (f + 2) = 7DFE78
d) i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 7DFE7C (f + 3) = 7DFE7C
e) i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 7DFE80 (f + 4) = 7DFE80
