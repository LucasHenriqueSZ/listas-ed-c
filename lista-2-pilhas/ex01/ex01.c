/*
		1-ordenação crescente

Crie um programa que usa duas pilhas A e B para ordenar uma sequência de n números 
dados pelo usuário.A ideia é organizar a pilha A de modo que nenhum item seja empilhado
sobre outro menor(use a pilha B apenas para manobra)e,depois,descarregar e exibir os 
itens da pilha A.
*/

#include <stdlib.h>
#include <stdio.h>
#include "pilha.h" 
#include <string.h>

int main(void){
int n, num;
printf("informe o tamanho da sequencia");
	scanf("%d",&n);
Pilha a = pilha(n);
Pilha b = pilha(n);

	puts("inserir numeros\n");
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		empilha(num,b);
		}
puts(" ");
while(!vaziap(b)){
		int ax=topo(b);
		desempilha(b);
		while(!vaziap(a) && topo(a)<ax){empilha(topo(a),b);desempilha(a);}
		empilha(ax,a);
		}
	while(!vaziap(a)){
		printf("%d \n",desempilha(a));
		}
return 0;
}
