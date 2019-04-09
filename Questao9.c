9 - O que fazem os seguintes programas em C?

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}

a) O programa faz uma listagem dos valores dos elementos do vetor “vet” a partir do conceito de incremento de ponteiros.


int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}
b) O programa faz uma listagem dos endereços de memória dos elementos do vetor “vet” em hexadecimal a partir do conceito de incremento de ponteiros.
