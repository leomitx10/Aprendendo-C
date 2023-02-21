#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");

    float a,b;

    scanf("%f %f",&a,&b);

    printf("%f", (a+b)/2);
}
