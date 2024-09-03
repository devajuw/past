#include <stdio.h>
void main()
{
          int a[3];
          int i, j, t;
          printf("Enter elements in Array \n");
           for (i = 0; i < 3; i++)
          {
                    scanf("%d", &a[i]);
          }

          for (i = 0; i < 3; i++)
          {
                    for (j = i + 1; j < 2; j++)
                    {
                              if (a[i] > a[j])   {
                                        t=a[i];
                                        a[i]=a[j];
                                        a[j] = t;
                              }}
                              printf("after Sorting \n");
                              for ( i = 0; i < 3; i++)
                              {
                                        printf("%d  ",a[i]);
                              }
          }
                                                           
          }

