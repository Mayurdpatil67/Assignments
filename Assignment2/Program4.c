//Problem Statement : Display first number in second number of times .
#include<stdio.h>
void Display(int iNo, int frequency)
{
   auto int iCnt=0;
   for(iCnt=1;iCnt<=frequency;iCnt++)
   {
      printf("%d",iNo);
   }


}
int main ()
{
   auto int iValue=0;
   auto int iCount=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);


    Display(iValue,iCount);


    return 0;

}