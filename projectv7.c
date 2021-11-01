#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[],int size)
{
    int i,j;
    int min;
    for(i=0;i<size;i++)
        {
            min=i;
            for(j=i;j<size;j++)
                {
                    if(arr[j]<arr[min])
                        {
                            min=j;
                        }
                }
            int temp= arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
}

/*

void randomArrayGenerator()
    {        
        srand(time(NULL));
        int myInts[25],i;
        int size= sizeof(myInts)/sizeof(myInts[0]);

        for(i=0;i<size;i++)
            {
                myInts[i]=rand() % 100 + 1;
            }
        
        for(i=0; i<size; i++)
            {
                printf("Element #%d: %d\n", i,myInts[i]);
            }

        system("PAUSE");
    
    }

*/


int main()
{  
    for(int k=100;k<101;k++)
        {
            int x= rand() %500 +8;


            srand(time(0));
            int myInts[10000],i;
            int sizeArray= sizeof(myInts)/sizeof(myInts[0]);

            for(i=0;i<sizeArray;i++)
                {
                    myInts[i]=rand() % 100 + 1;
                }
        
            for(i=0; i<sizeArray; i++)
                {
                    printf("Element #%d: %d\n", i,myInts[i]);
                }

            



            


    
    int size= sizeArray;

        clock_t start, end;
        double cpu_time_used;
        start= clock();

        selectionSort(myInts,size);

        end= clock();
        cpu_time_used= ((double) (end-start)) /     CLOCKS_PER_SEC;
       
         printf("Gecen sure = %.9f saniyedir", cpu_time_used);
    
    
    
    

    printf("\n");

/*    for(int i=0;i<size;i++)
        {
            printf("%d \n",myInts[i]);
        }
*/
}
    
    
/*    
    
        
    for(int i=0;i<sizeArray;i++)
            {
                printf("%d ",myInts[i]);
            }


    
    int size= sizeArray;

    selectionSort(myInts,size); 

    printf("\n");

    for(int i=0;i<size;i++)
        {
            printf("%d \n",myInts[i]);
        }
*/



/*
    clock_t begin = clock();

    selectionSort(myInts,size);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    
    printf("%f time: ", time_spent);
*/


}