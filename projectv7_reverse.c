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
        
void selectionSortReverse(int arr[],int size)
{
    int length = sizeof(arr)/sizeof(arr[0]);
    int temp = 0; 
    
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
            if(arr[i] < arr[j]) {    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;    
            }     
        }     
    }    
    printf("\n");    
    //Displaying elements of array after sorting    
    printf("Elements of array sorted in descending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
}





int main()
{  
    
    /*
    int elemanSayisi[1001];
    for(int i = 0; i <= 1000; i++){
        elemanSayisi[i] = i;
    }
    
    for (int i = 0; i < 1001; i++)
    {
        printf("elemanSayisi %d\n", elemanSayisi[i]);
    }
    */
    
    
    //int elemanSayisi[1000];
    
    
    int elemanSayisi[]={10000};
            
            
            
            int x= rand() %500 +8;
            int m;
            for (m = 0; m <1001; m++)
            {
                int z=elemanSayisi[m];


            int myInts[z],i;
            int sizeArray= sizeof(myInts)/sizeof(myInts[0]);

            for(i=0;i<sizeArray;i++)
                {
                    myInts[i]=rand() % 10000 + 1;
                }
        
        /*    for(int i=0; i<sizeArray; i++)
                {
                    printf("Element #%d: %d\n", i,myInts[i]);
                }
        */
            
        int size= sizeArray;

        clock_t start, end;
        double cpu_time_used;
        double cpu_time_used_2;
        
        start= clock();

        selectionSortReverse(myInts,size);

        end= clock();
        
        cpu_time_used= ((double) (end-start)) /     CLOCKS_PER_SEC;

    for(int i=0; i<sizeArray; i++)
                {
                    printf("Sorted Element #%d: %d\n", i,myInts[i]);
                }
    
        
        
        
        printf("%d eleman icin gecen sure = %.20f saniyedir. \n",elemanSayisi[m], cpu_time_used);

        
    /*    for(int i=0;i<10000;i++)
        {
            printf("%d \n",myInts[i]);
        }
    
    */
    
    /*    start= clock();

        selectionSort(myInts,size);

        end= clock();
        
        cpu_time_used_2= ((double) (end-start)) /     CLOCKS_PER_SEC;


        printf("Sirali dizide %d eleman icin gecen sure = %.20f saniyedir. \n",elemanSayisi[m], cpu_time_used_2);

    */
    
    
    
    

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






//fprintf (“test.txt”, “%f”, j);




}