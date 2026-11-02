#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : EvenFactorial
//          Input         : 5
//          Output        : 8 = 4 * 2 
//          Description   : Print the even factorial of input numbers
//          Date          : 02/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return EXIT_SUCCESS;
}