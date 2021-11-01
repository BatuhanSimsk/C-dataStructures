#include <stdio.h>
#include <time.h>

#define LIMIT 100

int main() 
{
  
   
   clock_t begin = clock();
   
/* here, do your time-consuming job */

/*int arr[LIMIT],size;
    
    for (int k=0;k<= LIMIT; k++)
    {
        arr[k]=k;
    }


    for (int k=0;k<= LIMIT; k++)
    {
      printf("%d dizi",arr[k]);
    }
*/


   int arr[]={14,72,26,2,86};


   int n=LIMIT;
   int i, j, position, swap;
   for (i = 0; i < (n - 1); i++) 
   {
      position = i;
      for (j = i + 1; j < n; j++) 
      {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) 
      {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   printf("\n");
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
   

   printf("\nTime: %f",time_spent);
   
   
   
   
   return 0;
}