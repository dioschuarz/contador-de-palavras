/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */
#include <stdio.h>
#include <ctype.h>
char c=0,prev=0,prev2=0;
int count=1;
int word=0;
int main (){
	while(c!='\n'){
		prev2=prev;
		prev=c;
		scanf("%c",&c);
		if (isalnum(c)){
		    word=1;
		}
		if((isalnum(c))&&((ispunct(prev))||isspace(prev))){ // c=letra ou numero e (and) prev=espaço ou pontução
		    count++;
		    if(ispunct(prev)&&isdigit(prev2)&&isdigit(c)) count--;
		}
	}
	if(c=='\n' && !word){
		count=0;
	}
	printf("%d\n",count);
	return 0;
}
