12 - Suponha que as seguintes declarações tenham sido realizadas:

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
Identifique quais dos seguintes comandos é válido ou inválido:
aloha[2] = value;
a)Válido, pois um valor do tipo float está sendo atribuído a uma posição de um vetor também do tipo float.

scanf("%f", &aloha);
b)Válido, pois o scanf está lendo uma variável do tipo float, que será armazenada no endereço do primeiro índice do vetor aloha.

aloha = value";
c)Inválido, por causa da expressão “.

printf("%f", aloha);
d)Válido, pois o printf está imprimindo uma variável do tipo float armazenada na primeira posição de aloha.

coisas[4][4] = aloha[3];
e)Válido, pois tanto a matriz quanto o vetor armazenam valores float .

coisas[5] = aloha;
f)Inválido, pois a matriz não está escrita de forma correta.

pf = value;
g)Inválido, pois o ponteiro está recebendo um valor.

pf = aloha;
h)Válido, pois o ponteiro está recebendo um endereço.
