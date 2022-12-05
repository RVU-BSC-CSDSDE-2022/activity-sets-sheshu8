#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
   // int a, int b;
  input();
}
int input()
{
  int a,b;
  printf("enter two numbers:\n");
  scanf("%d%d",&a,&b);
  add(a,b);
}
int add(int a,int b)
{
  int sum=0;
  sum=a+b;
  output(a,b,sum);
}
void output(int a,int b, int sum)
{
  printf("sum of %d and %d is %d",a,b,sum);
}