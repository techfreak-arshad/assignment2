#include<stdio.h>
int main()
{
    int num,new_num;
    printf("Enter the number\n");
    scanf("%d",&num);
    new_num=num-num%10;
    printf("The new number is=%d",new_num);
    return 0;
}
