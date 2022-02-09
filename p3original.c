#include<stdio.h>
int input_number()
{
  int n;
  printf("enter a number to be checked:");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
  {
    if (n%i==0)
      return 1;
  }
  return 0;
}
void output(int n,int composite)
{
  if (composite==1)
  {
    printf("%d is a composite number",n);

  }
  else
  {
    printf("%d is not a composite number",n);
  }
}
int main()
{
  int num,compositeres;
  num=input_number();
  compositeres=is_composite(num);
  output(num,compositeres);


}