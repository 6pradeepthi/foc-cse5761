#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int principle,rate,time,interest;
 printf("enter the principle: ");
 scanf("%d", &principle);
 printf("enter the rate:");
 scanf("%d", &rate);
 printf("enter the time:");
 scanf("%d", &time);
 interest=principle*rate*time/100;
 printf("the simple interest is %d",interest);
 return 0;
}