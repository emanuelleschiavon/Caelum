#include <stdio.h>
int main (void) {
	
	FILE *arquivo;
	arquivo = fopen("arquivo.txt","r");
		
	getc(arquivo);
	while (!feof(arquivo)){

