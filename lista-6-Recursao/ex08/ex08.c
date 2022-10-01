/*
Exercício 8.Função hanói
*/

#include <stdio.h>

void movetore(int origem, int destino, int auxiliar, int qnt){
  if( qnt == 1 ){
    printf("Move de %d para %d\n", origem, destino);
    
  }else{
    movetore(origem, auxiliar, destino, qnt-1);
    movetore(origem, destino, auxiliar, 1);
    movetore(auxiliar, destino, origem, qnt-1);
  }
}


int main (void){

	printf("torre de hanoi: \n pino origem:1 \n pino auxiliar:2 \n pino destino:3 \n\n");
	movetore(1,2,3,3);
	return 0;
	}
