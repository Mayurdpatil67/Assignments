#include<stdio.h>

int MultFact(int iNo)
{

   auto int iCnt =0;
   auto int iMul=1;

  for(iCnt=1;iCnt<iNo;iCnt++)
   {
    if((iNo%iCnt)==0)
     {
       iMul=iMul*iCnt;
       
     } 
     
   }
   return iMul;

}

int main ()
{
  auto int iValue=0;
  auto int iRet =0;


  printf("Enter number \n");
  scanf("%d",&iValue);

   iRet=MultFact(iValue);

   printf("%d  ",iRet);


    return 0;

}