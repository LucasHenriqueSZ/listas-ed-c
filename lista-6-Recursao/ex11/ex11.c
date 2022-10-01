/*
Exercício 11.Quociente
Crie a função recursiva quoc(m,n),que devolve o quociente da divisão inteira do número natural m pelo númeronatural n>0,usando 
apenas soma e subtração.
*/

#include <stdio.h> 
int quoc(int x, int y); 
int main(void) { 
 int m, n, z; 
 printf("Digite dois números um para dividendo e um para divisor: "); 
 scanf("%d %d", &m, &n); 
 z = quoc(m, n); 
 printf("%d dividido por %d eh %d\n", m, n, z); 
 return 0; 
} 

int quoc(int x, int y) { 
 if(x>0){
	return (1+quoc(x-y,y));
	}else{
	return 0;
	}
}
