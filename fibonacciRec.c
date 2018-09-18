#include <stdio.h>

int Fib(int i){
    if ((i==1) ||(i==2))
        return 1;

    if (i>2)
        return (Fib (i-1) + Fib (i-2) );
}

int main()
{
    unsigned int b;
    printf("\nDigite qual o termo: \n");
    scanf("%u", &b);
    printf("\nO %d termo é %d\n\n", b, Fib(b));
    return 0;
}