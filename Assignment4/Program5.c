//Problem Statement :Return difference between summation of all its factors and non factors .
#include<stdio.h>

int FactDiff(int iNo)
{
    auto int iCnt =0 ;
    auto int iSum =0;
    auto int iSumX=0;
    auto int iDiff=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
     {
       if(iNo%iCnt==0)
       {
            iSum=iSum+iCnt;   
       }
       if (iNo%iCnt!=0)
       {
            iSumX=iSumX+iCnt;      
       }   
         iDiff=iSum-iSumX;

     }
      return  iDiff;

}

int main()
{
    auto int iValue=0;
    auto  int iRet =0;
   
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
 
    printf("%d",iRet);

    return 0;

}