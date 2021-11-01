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
            int myInts[x],i;
            int sizeArray= sizeof(myInts)/sizeof(myInts[0]);

            for(i=0;i<sizeArray;i++)
                {
                    myInts[i]=rand() % 100 + 1;
                }
        
            for(i=0; i<sizeArray; i++)
                {
                    printf("Element #%d: %d\n", i,myInts[i]);
                }

            system("PAUSE");



            


    
    int size= sizeArray;

    selectionSort(myInts,size); 

    printf("\n");

    for(int i=0;i<size;i++)
        {
            printf("%d \n",myInts[i]);
        }
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



}