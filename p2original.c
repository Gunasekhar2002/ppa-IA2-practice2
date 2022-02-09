#include<stdio.h>

int input_side(){
  int a;
  printf("enter the sides of a,b and c:");
  scanf("%d",&a);
  return a;

}
int check_scalene(int a,int b,int c)
{
  if (a!=b && b!=c && c!=a)
  {
    
    return 1;

  }
  else
  {
    return 0;
  }
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("the triangle is scalene");
  }
  else
  {
    printf("the triangle is not scalene");
  }
}
int main()
{
  int a,b,c,isscalene,chscalene;
  a=input_side();
  b=input_side();
   c=input_side();
   chscalene=check_scalene(a,b,c);
   output(a,b,c,chscalene);
   


}