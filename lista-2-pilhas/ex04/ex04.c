/*
		4- Balanceamento de parênteses 

Usando pilha, crie uma função para verificar se uma expressão composta a penas 
por chaves,colchetes e parênteses, representada por uma cadeia de caracteres,está ou não
balanceada.Por exemplo,as expressões "[{()()}{}]" e "{[([{}])]}" estão balanceadas,mas 
as expressões "{[(}])" e "{[)()(]}" não estão.
*/


#include <stdio.h>
#include "pilha.h" //pilha de char
#include <string.h>



int main(void){
Pilha a = pilha(10);
char *exp;
char *p;
int tm=0;



printf("informe a expresao \n");
fgets(exp=malloc(sizeof(char)), 50, stdin);

	tm=strlen(exp)-1;

	for(int i=1;exp[i]!='\0';i++){
		if(exp[i-1]!='['&& exp[i-1]!=']'&&exp[i-1]!='('&&exp[i-1]!=')'&&
		   exp[i-1]!='{'&&exp[i-1]!='}'||tm%2==1){
			puts("expressao invalida");
			exit(0);
			}
		}
	p = malloc(sizeof(char));
	
	for(int y=0;y<tm;y++){
		if(exp[y]=='['||exp[y]=='{'||exp[y]=='('){
		empilha(exp[y],a);
			}else if(vaziap(a)){puts("expressao invalida");
				exit(0); 
			}else{
			*p = desempilha(a); //caractere desempilhado 'abertura'
			switch(exp[y]){
				case ')':
        	if(*p == '('){
           		//valida
       		} else{
           		puts("expressao invalida");
				exit(0); 
						}
        	break;

			case '}':
        	if(*p == '{'){
           		 //valida
       		 }else{
           		puts("expressao invalida");
				exit(0);
        	}break;
			case ']':
        	if(*p == '['){
           		//valida
       		 }else{
           		puts("expressao invalida");
				exit(0);
        	}break;
				}
		}
}

if(vaziap(a)){puts("expressao balanceada");}else{puts("expressao invalida");}

	return 0;
}


