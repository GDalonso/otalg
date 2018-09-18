```
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
```

até 8 elementos - 4 níveis
até 16 elementos - 5 níveis
até 32 elementos - 6 níveis

*O(log n)* pra dividir o vetor até chegar em folhas.