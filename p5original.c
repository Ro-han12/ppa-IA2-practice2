#include<stdio.h>
int input()
{
  int a;
  printf("Enter the numbers: ");
  scanf("%d", &a);
  return a;
}
int _gcd(int a, int b)
{
  int gcd=0;
  for(int i=1;i<=a && i<=b;i++)
  {
    if(a%i==0 && b%i==0)
    {
      gcd=i;
    }
  }
  return gcd;
}
void out_put(int a,int b,int gcd)
{
  printf("GCD OF %d and %d is %d\n", a,b,gcd);
}
int main()
{
  int a,b, gcd;
  a=input();
  b=input();
  gcd=_gcd(a,b);
  out_put(a,b,gcd);
  return 0;
}