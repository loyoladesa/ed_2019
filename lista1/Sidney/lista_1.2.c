// Escrito por Sidney Loyola de Sá
// Data: 30/03/2019

#include <stdio.h>
#include <math.h> //lembrar de incluir o -lm no final na hora de compilar


int primo(int n);

int main(void) {

	
	int n,aux,naoEncontrar;
	
	n = 1;
	
	
	while (n > 0){
		
		naoEncontrar = 1;
		aux = 0;

		printf("Insira o valor de n: ");
		scanf("%d", &n);
		
		int v[n];
		
		
		for (int i = 0; i< n; i++){
			naoEncontrar = 1;
			while(naoEncontrar){
				if(primo(aux)){
					v[i] = aux;
					naoEncontrar = 0;
				}					
				aux = aux + 1;
			}					
		}		
		printf("%d Numeros Primos  : ",n);
		for(int i = 0; i< n; i++){
			printf("%d ", v[i]);			
		}
		printf("\n");
		
	}

	return 0;
}

int primo(int n) {
	if(n == 2){
		return 1;
	}else if (n<2 || (n%2) == 0){
		return 0;
	}else{
		int lim = (int) sqrt(n);
		for(int i = 3; i<= lim; i+=2){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
	
}






