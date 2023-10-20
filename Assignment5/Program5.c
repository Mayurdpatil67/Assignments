//Problem Statement : Accept total marks & obtained marks from user and calculate percentage .
//(Handle the condition if number is 0) 


#include<stdio.h>

float Percentage(int iTotal ,int iObtained)
{   
     auto float fPercentage =0.0;

   if((iTotal<0)||(iObtained<0)|(iTotal<iObtained))  //Filter Applied Here .
   {
    printf("Invalid input");
    return fPercentage;
   }
   
   fPercentage=(((float)iObtained/(float)iTotal)*100);
   return fPercentage;


}
int main ()
{
    auto int iValue1 =0 , iValue2 =0;
    auto float fRet =0.0;

    printf("Please enter total marks");
    scanf("%d",&iValue1);

    printf("Please enter obtained percentage");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);
     
    printf("Percentage is :%f",fRet);
     
    return 0;

}