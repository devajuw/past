//inputting 2x2 array and printing it

#include <stdio.h> 
int main()
{
          int i,j,a[2][2];
           printf("Enter array A\n");
  for (i=0;i<2;i++)
  {
          for (j=0;j<2;j++)
          {        
                    scanf("%i",&a[i][j]);
          }
          }
          printf("AAPKA Array : \n");
     for(i=0;i<2;i++) {
    
    for(j=0;j<2;j++) {
        
        printf("%d  ",a[i][j]);
      
    }
 printf("\n");}
       return 0;   
        
}
