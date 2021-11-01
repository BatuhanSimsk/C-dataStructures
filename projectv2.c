#include <stdio.h>
#include <time.h>

int main() 
{
    
clock_t begin = clock();
/* here, do your time-consuming job */
int array[50],size;
    int x;
    printf("kac elemanli? : ");
    scanf("%d",&size);
    for (x = 0; x < size; x++)
    {
        scanf("%d",&array[x]);
    }

   int n=size;
   int i, j, position, swap;
   for (i = 0; i < (n - 1); i++) 
   {
      position = i;
      for (j = i + 1; j < n; j++) 
      {
         if (array[position] > array[j])
            position = j;
      }
      if (position != i) {
         swap = array[i];
         array[i] = array[position];
         array[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", array[i]);
  

clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

printf("Time: %f ",time_spent);

return 0;
}