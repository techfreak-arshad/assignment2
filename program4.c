#include<stdio.h>
int main()
{
int a,b;
printf("Enter the first number");
scanf("%d",&a);
printf("Enter the second number");
scanf("%d",&b);
a=a*b;
b=a/b;
a=a/b;
/*a=a+b;
b=a-b;
a=a-b;*/
printf("Number after swapping are:  a=%d   b=%d",a,b);
return 0;

}
