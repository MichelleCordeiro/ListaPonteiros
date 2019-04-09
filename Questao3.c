3 - Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
}

a) Irá imprimir o endereço de i, para o qual p está apontando, em hexadecimal, ou seja FFE.

b) Irá imprimir um inteiro no valor de:
*p + 2 = *&i + 2 = 5 + 2 = 7

c) Irá imprimir um inteiro no valor de:
**&p = *&i = 5

d)  Irá imprimir um inteiro no valor de:
3**p = 3**&i = 3*5 = 15

e)  Irá imprimir um inteiro no valor de:
**&p + 4 = *&i + 4 = 5 + 4 = 9
