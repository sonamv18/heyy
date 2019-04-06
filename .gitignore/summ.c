
#include<stdio.h>
void input(int num[100], int i ,int n)
{
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0; i<=n;i++)
    scanf("%d",&num[i]);
}
int sum( *num[int i], i)
{
    int summ==0;
    for(int i=0; i<=n;i++)
    summ=summ + *num[i];
    return summ;
}
void output()
{
    printf("the sum of given numbers is %d",summ);
}
int main()
{   
    int num[100],int i,int n,int summ;
    input(int num[100], int i ,int n);
    summ=sum(&num[100], i);
    output(summ);
}
