// Escrito por Sidney Loyola de Sá
// Data: 30/03/2019

#include <stdio.h>
#include <math.h> //lembrar de incluir o -lm no final na hora de compilar


int primo(int n);

int main(void) {

	
	int n;
	
	while (1){
		
		printf("Insira o valor de n: ");
		scanf("%d", &n);
		
		if(n <= 0) return 0;

		int v[n-1];
		int c[n-1];

		for(int i = 0; i<(n-1); i++){
			v[i] = i +2;
			c[i] = 1;
		}
		
		for(int i = 0; i<(n-1); i++){
			if(c[i] != 0){
				for(int j = i+1; j<(n-1); j++){
					if(v[j]%v[i] == 0){
						c[j] = 0;
					}
				}
			}
		}

		printf("Peneira de Erastothenes %d : ",n);
		for(int i = 0; i< (n-1); i++){
			printf("%d ", v[i]);			
		}
		printf("\n");

		printf("Primos : ");
		for(int i = 0; i< (n-1); i++){
			if(c[i] == 1){
				printf("%d ", v[i]);
			}
						
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






