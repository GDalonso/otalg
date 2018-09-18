#include <stdio.h>

double pot(double a, unsigned int b){
    if(b == 1)
        return a;
    return a * pot(a, b-1);
}

int main()
{
    double a;
    unsigned int b;
    printf("\nDigite a e b: \n");
    scanf("%lf %u", &a, &b);
    printf("\n%.2lf elevado a %d: %.2lf\n\n", a, b, pot(a, b));
    return 0;
}
