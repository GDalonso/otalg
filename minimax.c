#include<stdio.h>

void minimax(float v[],int n, float *a,float *b){
    if(n == 0)
        return;
    float min = v[0];
    float max = v[0];

    for (int i=1; i<n; i++){
        if(v[i]> max){
            max = v[i]; }

        if(v[i] < min){
            min = v[i]; }
    }

    *a= max;
    *b = min;

    return;
}

int main (){
	float v[]={0,-3,-10.5,15.5,20,37};
	float x,y;
	int tam = 6;
	minimax (v, tam, &x, &y);
	printf ("%f %f", x, y);
	getchar(); 
	return 0;
}
