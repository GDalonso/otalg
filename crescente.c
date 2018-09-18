#include <stdio.h>

int crescente(float v[], int n){
    int i=0;
    while(i < (n-1)){
        if (v[i] > v[i+1]){
            return 0;
        }
        i++;
    }
    return 1;
}

// melhor caso - Vetor decrescente, só executa 1 operação
//  Pior caso - Vetor crescente - executa N operações
// O(N) - Linear

int main (){
	float v[]={37, 20};
	int tam = 2;
	int x =crescente (v, tam);
	printf ("%d ", x);
	getchar(); 
	return 0;
}