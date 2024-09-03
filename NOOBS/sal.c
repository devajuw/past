#include <stdio.h> 
void main()
{
 int salary,tax,fsalary;
 printf("enter your salary \n");
 scanf("%d",&salary);
 tax=(salary*5)/100;
 fsalary=tax+salary;
 if(salary<500000){
          printf("you have to pay tax");

 }
 else if(salary>500000){
   printf(" your tax is %d \n",tax);
   printf("your final salary is %d",fsalary);
 }
          
}

