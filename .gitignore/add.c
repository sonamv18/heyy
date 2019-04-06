#include<stdio.h>
void input(int *a,int *b)
{
    printf("enter first number");
    scanf("%d", a);
    printf("enter second number");
    scanf("%d" , b);
}
void add2nos(int a , int b, int *c)
{
    *c=a+b; 
}

void output(int a, int b, int c)
{
    printf("%d + %d = %d " , a,b,c);
}
int main()
{    int a,b,c;
     input(&a,&b);
     add2nos(a,b,&c);
     output(a,b,c);
}
