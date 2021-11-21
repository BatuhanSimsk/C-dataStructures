#include<stdio.h>
#include<stdlib.h>

void factorization(int i)
{
    if (i==1)
    {
        return;
    } 
    int number=2;
    while (i%number != 0)
    {
        number++;
    }
    printf("%d ",number);
    factorization(i/number);
}

int main()
{
factorization(96996900);
}