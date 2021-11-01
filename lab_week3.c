#include<stdio.h>
#include<time.h>

int main()
    {
        clock_t start, end;
        double cpu_time_used;
        start= clock();
        end= clock();
        cpu_time_used= ((double) (end-start)) /     CLOCKS_PER_SEC;
        printf("Gecen sure = %.9f saniyedir", cpu_time_used);





    }