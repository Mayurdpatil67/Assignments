//Problem Statement :  Print that number of * on screen .
#include<stdio.h>
void Display(int iNo)
{

  while(iNo>0)
  {
    printf("*");
    iNo--;

  }
}

int main()
{
   auto int iValue =0 ;

   printf("Enter number\n");
   scanf("%d",&iValue);

   Display(iValue);
  
    return 0;

}