# Minimax

```
#include<stdio.h>

void minimax(float v[],int n, float *a,float *b){
    int j;
    *a = *b = v[0];
    for(j=1, j<n; k++){
        if(c[j] < *a) *a = v[j]; //(N-1)
        if(v[j] > *b) *b = v[j]; //1
    }
} 
```

#### Pior caso

Vetor ordenado decrescente ou crescente, fazendo opeações de atribuição em todo os casos.

(N-1)X1 = O(N) - *Linear*

#### Melhor caso

Vetor com 1 elemento, ou com todos os elementos iguais, não ocorre nenhuma troca.

O(N) *Linear*
