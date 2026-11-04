#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FactDiff
//          Input         : 12
//          Output        : -34   (16 - 501)
//          Description   : Calculate the difference between the sum of factors and the sum of non-factors of a given number
//          Date          : 04/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)   
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        else
        {
            iSum = iSum - iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
