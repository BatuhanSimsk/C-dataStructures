#include<stdio.h>
#include<stdlib.h>

int minimum,temp;
int arr[100];


void selectionSort(int arr[],int elemanSayisi)
{
    int i,j;
    
    for (i=0; i<elemanSayisi-1; i++);
        {
            minimum=i;
            for(j=i+1; j<elemanSayisi; j++)
                {
                    if(arr[j]<arr[minimum])
                    
                        minimum=j;
                    
                }
            
            temp= arr[i];
            arr[i]=arr[minimum];
            arr[minimum]=temp;

        }

}





int main()
{




int secim, i;
while(1==1)
    {
        printf("\n Eleman sayisi: ");
        scanf("%d",&secim);

        for(i=0; i<secim; i++)
            {
                printf("\n %d. sayiyi girin.", i+1);
                scanf("%d", &arr[i]);
            }

            selectionSort(arr,secim);
            for(i=0; i<secim; i++)
                {
                    printf("%d", arr[i]);
                }
    }




return 0;

}