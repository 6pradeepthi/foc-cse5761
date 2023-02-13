#include<stdio.h>
#include<conio.h>
int main()
{
int i,num;
printf("enter the number to print table:");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
printf("%d * %d = %d",num, i, (num*i));
printf("\n");
}
return 0;
}