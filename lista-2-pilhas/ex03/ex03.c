/*
		3- Inversão de palavras 

Usando uma pilha,crie umprograma para inverter a ordem das letras 
nas palavras de uma frase,sem inverter a ordem das palavras na frase. 
Por exemplo, se for digitada a frase "apenas um teste",o programa 
deverá produzir a seguinte saída:sanepa mu etset.
*/


#include <stdio.h>
#include "pilha.h" //pilha de char
#include <string.h>

int main(void){
Pilha P = pilha(10);
char txt[40]= {"apenas um teste"};
	
for(int i=0;txt[i]!='\0';i++){
		if(txt[i]!= ' '){
			empilha(txt[i],P);
			}else{
			while( !vaziap(P) ){
				printf("%c",desempilha(P));
				}
				printf(" ");
			}	
		}
				while( !vaziap(P) ){
					printf("%c",desempilha(P));
					}
	puts(" ");
return 0;
}
