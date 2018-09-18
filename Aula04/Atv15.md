# Bubble Sort
```
#include <stdio.h>
#define troca(a, b) {int x=a; a=b; b=x; }

void bubble_sort(int v[], int n){
    for(int i=1; i<n-1; i++)            #N
        for(int j=0; j < n-1; j++)      #N
            if(v[j] > v[j+1])
                troca(v[j], v[j+1])
}

```
#### Pior caso
Vetor ordenado - O(N²) - Quadrático