5 - Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).
int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

a) O valor mostrado será 20, já que o valor do endereço para o qual o ponteiro está apontando foi modificado para 20.


  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);

b) O valor mostrado será 29, já que o valor do endereço para o qual o ponteiro está apontando foi modificado para 29.


  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

c) O valor mostrado será P, já que o valor do endereço para o qual o ponteiro está apontando é a primeira letra da string.


  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);

d) O valor mostrado será e, já que o valor do endereço para o qual o ponteiro está apontando é a quinta letra da string.


  /* (e) */
  p3 = nome;
  printf("%c \n", *p3);

e) O valor mostrado será e, já que o valor do endereço para o qual o ponteiro está apontando é a primeira letra da string.


  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3);
f) O valor mostrado será e, já que o valor do endereço para o qual o ponteiro está apontando é a quinta letra da string.


  /* (g) */
  p3--;
  printf("%c \n", *p3);

g) O valor mostrado será t, já que o valor do endereço para o qual o ponteiro está apontando é a quarta letra da string.


  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

h) O valor mostrado será 31, já que a variável é igual  ao valor do endereço da primeira posição do vetor.


  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

i) O valor mostrado será 45, já que a variável é igual  ao valor do endereço da segunda posição do vetor.


  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade); 27

j) O valor mostrado será 27, já que a variável é igual  ao valor do endereço da terceira posição do vetor.


  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

l) O valor mostrado será 31, já que a variável é igual  ao valor do endereço da primeira posição do vetor.


  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

m) O valor mostrado será 45, já que a variável é igual  ao valor do endereço da segunda posição do vetor.


  /* (n) */
  p5++;
  printf("%d \n", *p5); 27
  return(0);
}

n) O valor mostrado será 27, já que a variável é igual  ao valor do endereço da terceira posição do vetor.
