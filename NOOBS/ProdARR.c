#include <stdio.h>
void main()
{
        // scanning elements of ARR(A)

        int i, j, k, a[2][2], b[2][2], p[2][2];
        printf("Enter elements of array A\n\n");

        for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 2; j++)
                {
                        scanf("%i", &a[i][j]);
                }
        }

        // scanning elements of ARR(B)

        printf("\n\nEnter elements of array B\n\n");
        for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 2; j++)
                {
                        scanf("%i", &b[i][j]);
                }
        }

        // Finding product of the Arrays

        printf("\n\nThe desired product :\n\n");

        for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 2; j++)
                {
                        p[i][j] = 0;
                        for (k = 0; k < 2; k++)
                        {
                                p[i][j] += a[i][k] * b[k][j];
                        }

                        // Printing the product

                        printf("%d\t", p[i][j]);
                }
                printf("\n");
        }
}
