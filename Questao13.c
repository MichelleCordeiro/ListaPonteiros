13 - O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e escreva um pequeno programa exemplificando o uso deste recurso.

Um ponteiro para uma função é uma forma de declaração de variável que faz com que esta
armazene o endereço do início do código executável de uma função, que pode ser chamada
posteriormente através desse ponteiro. Outra característica importante é o fato de não
ser necessário alocar e desalocar memória para o seu uso.

#include<stdio.h>

void exemplo(int x){
    printf(“%d\n”, x);
}

int main(){
void (*func)(int)= exemplo;
    func(10);

    return(0);
}
