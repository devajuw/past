#include <stdio.h> 
void main()
{
      
       // entering elements
          printf("ENTER NO. of elements \n");
       int n ;
      
        scanf("%d",&n);
     
        int i,a[n],c;
     printf("ENTER elements in the Array \n");
        for(i=0;i<n;i++)
        {
          scanf("%d",&a[i]);

        }
        //printing

        printf("The Elements of the array are : \n");
       for(i=0;i<n;i++)
        {
          printf("%d \t",a[i]);

        }
         
}
