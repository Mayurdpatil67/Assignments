#include<stdio.h>

void Display(int iNo)
{
    auto int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }

}

int main ()
{

  auto int iValue =0;

  printf("Enter number \n");
  scanf("%d",&iValue);
 
  Display(iValue);

  return 0;

}