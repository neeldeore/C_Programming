#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : RangeSum
//          Input         : 10  18
//          Output        : 126
//          Description   : Addition of numbers in a given range(add a updater)
//          Date          : 04/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    if(iStart > iEnd)                       //error
    {
        printf("Invalid range\n");
        return 0;
    }
    
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);
    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);
    printf("Addition is : %d\n", iRet);

    return EXIT_SUCCESS;
}
