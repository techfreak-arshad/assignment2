#include<stdio.h>
int main()
{
int num,digit;
printf("Enter the number:");
scanf("%d",&num);
printf("Enter the digit:");
scanf("%d",&digit);
int new_num = num*10+digit;
printf("new number is :%d",new_num);
return 0;
}
