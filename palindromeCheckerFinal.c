#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool palindromeChecker(char string [],int s,int e)
{
    if(s >= e) //temel durum
    return true;
    else
    {
        return ((string[s] == string[e]) && palindromeChecker(string,s+1,e-1));
    }
}
int main()
{
    char string [100];
    printf("Palindrom sorgusu icin kelimeyi girin:");
    gets(string);
    int l = strlen(string);
    
    bool flag = palindromeChecker(string,0,l-1);
    if(flag == true)
    {
        printf("%s bir palindromdur.",string);
    }
    else
    {
        printf("%s bir palindrom degildir.",string);
    }
    return 0;
}