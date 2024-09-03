#include <stdio.h>
void minMax(int arr[], int len, int *min, int *max)
{
       *min = *max = arr[0];
       int i;
       for (i = 1; i < len; i++)
       {
              if (arr[i] > *max)
                     *max = arr[i];
              if (arr[i] < *min)
                     *min = arr[i];
       }
}
int main()
{

       int a[] = {2, 34, 353, 32, 9, 53, 78};
       int min, max;
       int len = sizeof(a) / sizeof(a[0]);
       minMax(a, len, &min, &max);
       printf("Minimum value in the array is: %d and Maximum value is: %d", min,
              max);
       return 0;
}