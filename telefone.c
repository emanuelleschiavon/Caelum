#include <stdio.h>
#define TAM 31
int main (void) {
	
	FILE *arquivo;
	arquivo = fopen("arquivo.txt","r");
		
	char palavra[TAM];
	char numero[TAM];
	int contador = 0;
	fgets (palavra , TAM , arquivo);
	while (!feof(arquivo)||contador<30){
		switch(palavra[contador]){
    		case 'A':
    		case 'B':
    		case 'C':
    			numero[contador] = '2';
    			break;
    		case 'D':
			case 'E':
			case 'F':
    			numero[contador] = '3';
    			break;
    		case 'G':
			case 'H':
			case 'I':
    			numero[contador] = '4';
    			break;
    		case 'J':
			case 'K':
			case 'L':
    			numero[contador] = '5';
    			break;
    		case 'M':
			case 'N':
			case 'O':
    			numero[contador] = '6';
    			break;
    		case 'P':
			case 'Q':
			case 'R':
			case 'S':
    			numero[contador] = '7';
    			break;
    		case 'T':
			case 'U':
			case 'V':
    			numero[contador] = '8';
    			break;
    		case 'W':
			case 'X':
			case 'Y':
			case 'Z':
    			numero[contador] = '9';
    			break;
    		case '1':
			case '-':
			case '0':
    			numero[contador] = '0' + palavra[contador];
    	}
    	contador++;
   	}
	
	fclose (arquivo);
	printf("%s\n", numero);
	return 0;
}

