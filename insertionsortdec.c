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