# Implementação e análise Selection Sort

```
void selection_sort(int v[], int n){
	int i, j, k;
	for (i=1; i<=n-1; i++){	        //n
		k = 0; 
		for (j=1; j<=n-i; j++)      //n-i
			if (v[j] > v[k])
				k = j;
		troca(v[k],v[j-1]);
	  }
  }
```

#### Ordem

n*(n-i) = O(n²)
