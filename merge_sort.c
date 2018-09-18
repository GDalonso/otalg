#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>

void intercala(int v[], int p, int m, int u){
	int *w = malloc((u-p+1) * sizeof(int));
	if (w == NULL) abort();
	int i = p, j = m+1, k=0;
	while (i<=m && j<=u)
		if (v[i] < v[j])
			w[k++] = v[i++];
		else 	
            w[k++] = v[j++];
	while (i<=m) w[k++] = v[i++];
	while (j<=u) w[k++] = v[j++];
	for (k = 0; k<=u-p; k++)			
		v[p+k] = w[k];
	free(w);
}

// o(logn) pra dividir o vetor até chegar em folhas.
// 8 - 4 íveis
// 16 - 5 níveis
// 32 - 6 níveis

void merge_sort(int v[], int p, int u){
	if (p == u) return;
	int m = (p + u)/2;
	merge_sort( v, p, m);
	merge_sort( v, m+1, u);
	intercala( v, p, m, u);
}


int main (){
    int tam = 100;
    int v[tam];

    for(int i = 0; i < tam; ++i)
    {
        v[i] = rand();
    }
    
	merge_sort(v, 0, tam);
	return 0;
}
