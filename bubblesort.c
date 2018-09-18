#include <stdio.h>
#define troca(a, b) {int x=a; a=b; b=x; }

void bubble_sort(int v[], int n){
    for(int i=1; i<n-1; i++)
        for(int j=0; j < n-1; j++)
            if(v[j] > v[j+1])
                troca(v[j], v[j+1])
}

int main (){
	int v[]={0,-3,-10,15,20,37};
	int tam = 6;
	bubble_sort (v, tam);
    for(int i=0; i < tam; i++){
    	printf ("%d\n", v[i]);
    }
	getchar(); 
	return 0;
}