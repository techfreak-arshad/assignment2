#include<stdio.h>
int main()
{
int a,b,swap;
printf("Enter the first Number");
scanf("%d",&a);
printf("Enter the second Number");
scanf("%d",&b);
swap=a;
a=b;
b=swap;
printf("number after swapping :  a=%d  b=%d",a,b);
return 0;
}
