#include <stdio.h>
void input(float *base, float *height)
{
  printf("enter the value of base: ");
  scanf("%f",base);
  printf("enter the value of height: ");
  scanf("%f",height);
}
void area(float base,float height,float *area)
{
  *area= 0.5*(height)*(base);
}
void output(float base,float height,float area)
{
  
  printf("area of the triangle is %f and %f is %f",base,height,area );
} 
int main()
{
  float base,height,t;
  input(&base,&height);
  area(base,height,&t);
  output(base,height,t);
  return 0;
}