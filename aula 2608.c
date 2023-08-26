#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, aux, n, vetor [5];
	
	for(i=0;i<=4;i++){
		printf("digite a idade da pessoa [%d] :",i+1);
		scanf("%d",&vetor[i]);
	}
	
	for(i+0;i<=4;i++){
		printf("%d \t",vetor[i]);
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
	
	for(i=0;i<=4;i++){
		printf("%d \t",vetor[i]);
	}

	
	
	for(n=0;n<=4;n++){	
	 for(i=0;i<=3;i++){
		
		if(vetor[i] < vetor[i+1]){
		   aux = vetor[i];
		   vetor[i] = vetor[i+1];
		   vetor[i+1] = aux;
	  }
	 }	
	}
	printf("\n");
	for(i=0;i<=4;i++){
		printf("%d \t",vetor[i]);
	}
	return 0;
}
