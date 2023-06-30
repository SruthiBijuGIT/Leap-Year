#include<stdio.h>    
int main()
{    
int a;    
printf("Enter a year");    
scanf("%d",&a);     
if(a%400==0)
{    
printf("%d IS A LEAP YEAR",a);    
}    
else
if(a%100!=0 && a%4==0)
{    
printf("%d IS A LEAP YEAR",a);    
}
else
{
  printf("%d IS NOT A LEAP YEAR",a);
}     
return 0;  
}    
