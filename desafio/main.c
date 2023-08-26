#include <stdio.h>
#include <stdlib.h>

//-Fazer o programa em C, que receba um conjunto de caracteres 
//-coloque-os em ordem alfabética utilizando o método Bubble Sort.

int main() {
	int i, aux, n, vetor[26];
	
	for(i=0;i<=4;i++){
		printf("digite a letra[%d] :",i+1);
		scanf("%s",&vetor[i]);
	}
	
	for(n=0;n<=4;n++){	
	 for(i=0;i<=3;i++){
		
		if(vetor[i] > vetor[i+1]){
		   aux = vetor[i];
		   vetor[i] = vetor[i+1];
		   vetor[i+1] = aux;
	  }
	 }	
	}
	printf("\n");
	for(i=0;i<=4;i++){
		printf("%c \t",vetor[i]);
	}
	return 0;
}
