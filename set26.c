#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,j;
scanf("%d %d",&a,&b);
for(j=a;j<=b/2;j++)
{
if(b%j!=0)
printf("%d",j);
}
getch();
}
