#include <stdio.h>
#include <time.h>



void selectionSort (int arr[], int last)
{

int current,i,smallest,walker=0;

    
    for(i=0;i<=last;i++)
    
            {
                current = smallest;
                walker = current + 1;
                for (last;walker<=last;walker++)
                    {
                        if(walker<smallest)
                            {
                                smallest=walker;
                            }
                        walker++;
                    }
                printf(" Smallest : %d\n", smallest);

                current=smallest;
                current++;
            }
}





int main() 
{



int arr[]={14,72,26};

selectionSort(arr,2);

for (int i = 0; i<=2; i++)
{
    printf("%d \n", arr[i]);
}









return 0;
}