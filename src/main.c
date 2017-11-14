/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;

  c = 1;

  int esp=1;
  int flagE=0;
  int total=0;

  while (c != '\n') {
    scanf("%c", &c);
	if(c== ' '||c== '.' || c== ','|| c== '-'){
		if(flagE==0){
			esp=esp+1;
			flagE=1;
			}		
	}else flagE=0;

	if(c== '0'||c== '1'||c== '2'||c== '3'||c== '4'||c== '5'||c== '6'||c== '7'||c== '8'||c== '9'){
		flagE=1;		
	}
  }

	total= esp;

  printf("%d\n", total);
  return 0;
}
