//WAP to perform all kinds of Arithmetic operations

#include<stdio.h>
int main()
{
int a,b,p,q,r,s,t;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
p=a+b;
q=a-b;
r=a*b;
s=a/b;
t=a%b;
printf("sum of two numbers is %d\n" , p);
printf("difference of two numbers is %d\n" , q);
printf("multiplication of two numbers is %d\n" , r);
printf("divisin of two numbers is %d\n" , s);
printf("modulo of two numbers is %d\n" , t);
return 0;
}
