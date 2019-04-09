8 - Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique.
p = mat + 1;
a)A expressão é válida, pois trata-se de um ponteiro recebendo um endereço de memória do mesmo tipo dele.

p = mat++;
b)A expressão é inválida, pois não é permitido incremento de endereços de vetores.

p = ++mat;
c)A expressão é inválida, pois não é permitido incremento de endereços de vetores.

x = (*mat)++;
d)A expressão é válida, pois trata-se de uma variável inteira recebendo o valor que está na primeira posição do vetor “mat”, que depois é incrementado.
