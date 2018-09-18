## Insertion sort decrescente
```
#include <stdio.h>
 
void insertionsortdec(int n, int array[]){
	int i, j,x;
	for (j=1;j<n;j++){
		x=array[j];
		for (i=j-1; i>=0 && array[i]<x; i--)
			array[i+1] = array[i];
		array[i+1] = x;
	}
}

int main()
{
 int a[5] = {1000, 2, 3, 7, 50};
 insertionsortdec(5, a );

	for (int i = 0; i < 5; i++)
		printf("%d \n", a[i]);

  return 0;
}
```

#### Invariantes

a cada passagem pelo ponto A:
    1. v[0...j-1] consiste nos elementos que pertenciam a v[0...n-1]

    2. o vetor v[0...j-1] é decrescente!

#### Inicialização

Quando *j=1*, o vetor *v[0...j-1]* consiste apenas no elemento *v[0]*, um vetor com 1 elemento já é trivialmente ordenado, provando os invariantes verdadeiros antes da primeira iteração!

#### Manutenção

Seja *j* um valor qualquer dado por *1<j<n*, o laço procura a posição adequada de *v[j]* e o insere lá.
O vetor *v[0...j-1]* está ordenado de forma decrescente, o invariante se preserva para todo j.

#### Término

A condição que encerra o laço é *j=n*. Substituindo *j* por *n* nos invariantes de laço temos 
    
    - v[0...n-1] consiste nos elementos que pertenciam a v[0...n-1]

    - o vetor v[0...n-1] é decrescente!

Observando que v[0...n-1] é o vetor inteiro dado no início do problema, concluímos que o vetor está ordenado, portanto o algoritmo está correto.