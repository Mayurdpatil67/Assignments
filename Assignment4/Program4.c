//Problem Statement :Return summation of all its non factors .
#include<stdio.h>
int SumNonFact(int iNo)
{
    auto int iCnt=0;
    auto int iSum =0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {      
            iSum=iSum+iCnt;
        }
           
    }
         printf("%d",iSum);
                  
}
int main ()
{
    auto int iValue=0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    SumNonFact(iValue);

     return 0;

}