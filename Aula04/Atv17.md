# Comparação Bubble Sort, Selection Sort, Insertion Sort

```
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define troca(a, b) {int x=a; a=b; b=x; }

void selection_sort(int v[], int n){
	clock_t begin = clock();

	int i, j, k, comparacoes, trocas;
	comparacoes = 0;
	trocas = 0;
	for (i=1; i<=n-1; i++){	// n-1 vezes
		k = 0; // armazena o índice do maior 
		for (j=1; j<=n-i; j++)
			comparacoes = comparacoes+1;
			if (v[j] > v[k])
				k = j;
		troca(v[k],v[j-1]);
		trocas = trocas+1;
	  }

	printf("\nSelection %d itens, %d comparacoes e %d trocas", n, comparacoes, trocas);
	
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nSelection Sort %f\n", time_spent);
  }

void bubble_sort(int v[], int n){
	clock_t begin = clock();
	
	int comparacoes, trocas;
	comparacoes = 0;
	trocas = 0;

	for (int i=1; i<=n-1; i++)
		for (int j=0; j<n-i; j++){
			comparacoes = comparacoes+1;
			if (v[j] > v[j+1])
				troca(v[j], v[j+1]);
				trocas = trocas+1;}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nBubble Sort %f", time_spent);
	printf("\nBubble %d itens, %d comparacoes e %d trocas\n", n, comparacoes, trocas);
}

void insertion_sort(int v[], int n){
	clock_t begin = clock();

	int i, j, x;
	int comparacoes, trocas;
	comparacoes = 0;
	trocas = 0;

	for (j = 1; j < n; j++){
		x = v[j];
		comparacoes = comparacoes+1;
		for (i = j-1; i >= 0 && v[i] > x; i--)
			v[i+1] = v[i]; 
			trocas = trocas+1;
		v[i+1] = x; 
		trocas = trocas+1;
	}
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\nInsertion Sort %f", time_spent);
	printf("\nInsertion %d itens, %d comparacoes e %d trocas\n", n, comparacoes, trocas);
}

int main (){
    unsigned int tam = 10000;
    int v[tam];
    int u[tam];
    int w[tam];

    for(int i = 0; i < tam; ++i)
    {
        v[i] = rand();
        u[i] = v[i];
        w[i] = v[i];
    }
    
	insertion_sort(v, tam);
	selection_sort(u, tam);
	bubble_sort(w, tam);
	return 0;
}

```
#### Saída

```
Insertion Sort 10.884326
Insertion 100000 itens, 99999 comparacoes e 199998 trocas

Selection 100000 itens, 704982704 comparacoes e 99999 trocas
Selection Sort 14.840782

Bubble Sort 48.251459
Bubble 100000 itens, 704982704 comparacoes e 704982704 trocas
```

#### Melhor desempenho no pior caso

Como visto pela saída do programa algoritmo de ordenação com melhor desempenho no pior caso é o *Insertion Sort*