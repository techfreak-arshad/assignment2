#include<stdio.h>
int main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
int rem=num%10;
num=num/10;
int new_num=rem*100+num;
printf("new number is:%d",new_num);
return 0;
}
