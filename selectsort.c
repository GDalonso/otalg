#include <stdio.h>
#define troca(a, b) {int x=a; a=b; b=x; }

void selection_sort(int v[], int n){
	int i, j, k;
	for (i=1; i<=n-1; i++){	// n-1 vezes
		k = 0; // armazena o índice do maior 
		for (j=1; j<=n-i; j++)
			if (v[j] > v[k])
				k = j;
		troca(v[k],v[j-1]);
	  }
  }


int main (){
	int v[]={0,-3,-10,15,20,37};
	int tam = 6;
	selection_sort (v, tam);
    for(int i=0; i < tam; i++){
    	printf ("%d\n", v[i]);
    }
	getchar(); 
	return 0;
}