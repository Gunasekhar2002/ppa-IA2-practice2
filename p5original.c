#include <stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a, int b)
{
 
   int i, gcd;

   

    for(i=1; i <= a && i <= b; ++i)
    {
        
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}
void output(int a,int b, int gcd)
{
  printf("HCF of %d and %d is %d",a,b,gcd);
}
int main()
{
  int a,b,hcf;
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
  return 0;
}