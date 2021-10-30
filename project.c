#include<stdio.h>
#include<stdlib.h>


void selectionSort(int arr[],int size)
{
    int i,j;
    int minimum;
    for (i=0,i<size,i++);
        {
            minimum=i;
            for(j=i;j<size;j++)
                {
                    if(arr[j]<arr[minimum])
                    {
                        minimum=j;
                    }
                }
            int temp= arr[i];
            arr[i]=arr[minimum];
            arr[minimum]=temp;

        }

}





int main()
{

int array[50],size;
int i;
printf("kac elemanli");
scanf("%d",&size);
for (i = 0; i < size; i++)
{
    scanf("%d",&array[i]);
}
selectionSort(array,size);
for (i = 0; i < size; i++)
{
    printf("%d",array[i]);
}

return 0;

}