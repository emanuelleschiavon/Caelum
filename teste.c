#include <stdio.h>
int main (void) {
	
	FILE *arquivo;
	arquivo = fopen("arquivo.txt","r");
	int c;
	char linha[30sxz];
		
	fgets ( linha , 30 , arquivo);
	while (!feof(arquivo)){
		puts(linha);
		fgets ( linha , 30 , arquivo);
	}
	fclose(arquivo);
	return 0;
}
