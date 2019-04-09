4 - Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?
p = i;
a) Ilegal, pois um ponteiro precisa receber um endereço.

q = &j;
b) Legal, pois o ponteiro q está recebendo o endereço de j.

p = &*&i;
c)Legal, pois o ponteiro p está recebendo um endereço.
i = (*&)j;
d) Ilegal, pois a expressão (*&) é insolúvel.

i = *&j;
d) Legal, pois o inteiro i está recebendo um valor.

i = *&*&j;
e) Legal, pois o inteiro i está recebendo um valor.

q = *p; ilegal
f) Ilegal, pois o ponteiro q está recebendo um valor.

i = (*p)++ + *q;
g) Legal, pois o inteiro i está recebendo um valor.
