#include <stdio.h>
    void main(){
    char a[10];
    for(int i=0;i<=9;i++)
    {
    scanf("%c",&a[i]);
}
for (int i=0;i<=9;i++)
{
    for(int j=0;j<=i;j++)
    {
    printf("%c ",a[j]);}
    printf("\n");
}
}R