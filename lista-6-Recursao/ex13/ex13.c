/*
Exerc�cio 13.Quadrado
O quadrado de um natural n � a soma dos n primeiros �mpares,i.e.,n2=1+3+5+...+(2n-1).
Crie a fun��o recursiva q(n),que devolve o quadrado de n,como base nesta informa��o.
*/

#include <stdio.h> 
 
int main(void){
	int num,i;
 printf("Digite um numero: "); 
 scanf("%d", &num); 
 printf("o quadrado de %d e: %d \n",num,quadrado(num,i)); 
 return 0; 
}

int quadrado(int num, int i){
	if(i<= (num*2)){
	if(i%2==1){
		return (i+quadrado(num,i+1));
		}else{
			return quadrado(num,i+1);
			}
	}else{
		return 0;
		}
	}

