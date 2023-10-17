#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    auto int iCnt=0;

    if(iNo<=0)
    {
        iNo=-iNo;

    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if (iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d",iCnt);
        }
    }
}

int main()
{
    auto int iValue =0;

    printf("Enter number \n");
    scanf ("%d",&iValue);

    DisplayEvenFactor(iValue);

     

    return 0;

}