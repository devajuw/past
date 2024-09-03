#include <stdio.h>
int main()
{
float c,f;
printf("Input in DEgree celcius\n");
scanf("%f",&c);
f=((c/5)*9)+32;
printf("%.2f in Fahrenheit scale = %0.2f",c,f);
 return 0;
}
