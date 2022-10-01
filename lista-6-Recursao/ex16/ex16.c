/*
Exercício 16. Torres de Hanói
Crie a função recursiva h(n),que devolve o número mínimo de movimentos para
resolver o problema das Torres de Hanói com n discos.Porexemplo,h(3)deve devolver 7.
*/

#include <stdio.h> 

// calcula o numero de movimentos necessarios
int h(int n){
    if(n==1){
        return 1;
    }
    else{
        return 2*h(n-1)+1;
    }
}

// resolve o problema com n discos 
void hanoi(int n,char origem,char destino,char auxiliar){ 
 if(n==1){ 
 printf("\nMova o disco 1 da base %c para a base %c",origem ,destino); 
 return; 
 } 
 hanoi(n-1,origem,auxiliar,destino); 
 printf("\nMova o disco %d da base %c para a base %c",n,origem,destino); 
 hanoi(n-1,auxiliar,destino,origem); 
} 
int main(void){ 
 int n; 
 printf("Digite o numero de discos : "); 
 scanf("%d",&n);

 
	printf("\n\n O numero minimo de movimentos para resolver a torre de hanoi com %d discos e: %d \n\n",n,h(n));

 printf("Para resolver a torre de Hanois faca :\n"); 
 hanoi(n,'A','C','B'); 
 return 0; 
}

