//Problem Statement: Accept three numbers and print its multiplication. 
//(Handle the condition if number is 0)
#include<stdio.h>
#include<conio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{ 
    auto int iMul=0;
    
    if((iNo1==0) && (iNo2==0) && (iNo3==0))
    {    
        iMul=0; 
    }
    else if ((iNo1==0)&&(iNo2==0))
    {
        iMul=iNo3;
    }
    else if ((iNo2==0)&&(iNo3==0))
    { 
        iMul=iNo1;
    }
    else if ((iNo1==0)&& (iNo3==0))
    {
        iMul=iNo2;
    }
    else if(iNo1==0)
    {
        iMul=iNo2*iNo3;
    }
    else if(iNo2==0)
    {
        iMul=iNo1*iNo3;
    }
    else
    {
        iMul=iNo1*iNo2*iNo3;
    }
     return iMul;
}
int main ()
{   
    auto int iValue1=0,iValue2=0,iValue3=0;
    auto int iRet=0;

    printf("Please enter three numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);

    

    return   0;

}