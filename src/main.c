/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c=0;				// variavel acumuladora de palavras
  int i=0;
  int j=0;

  while (c != '\n') {
    scanf("%c", &c);
    i++;
    if(c == ' '){
	j++;
	i=0;
    }
    if(c == '-'){
	j++;
	i=0;
    }
  }
  if(i>0) j++;
  printf("%d\n",j);
  return 0;
}
