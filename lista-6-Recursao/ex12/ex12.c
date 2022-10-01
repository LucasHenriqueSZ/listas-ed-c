/*
Exercício 12.Resto
Crie a função recursiva resto(m,n),que devolve o resto da divisão inteira do número natural m pelo número natural n>0,usando apenas subtração.
*/

#include <stdio.h> 
int quoc(int x, int y); 
int main(void) { 
 int m, n, z; 
 printf("Digite dois números um para dividendo e um para divisor: "); 
 scanf("%d %d", &m, &n); 
 z = quoc(m, n); 
 printf(" o resto da divisao de %d  por %d eh %d\n", m, n, z); 
 return 0; 
} 

int quoc(int x, int y) { 
 if(x>1 && x>=y){
	return (quoc(x-y,y));
	}else{
	return x;
	}
}

