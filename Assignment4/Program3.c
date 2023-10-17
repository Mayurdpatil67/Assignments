//Problem Statement :Display all its non factors .
#include<stdio.h>

int NonFact(int iNo)
{
   auto int iCnt =0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   
     if(iNo%iCnt!=0)
     {
        printf("%d  ",iCnt);
     }
}

int main ()
{
    auto int iValue=0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

     return 0;

}