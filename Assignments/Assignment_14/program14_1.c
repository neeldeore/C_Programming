#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : MultFact
//          Input         : 12
//          Output        : 144   (1 * 2 * 3 * 4 * 6)
//          Description   : Calculate the multiplication of factors of a given number
//          Date          : 04/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)   
{
    int iCnt = 0;
    int iSum = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum * iCnt;
        }
    }

    printf("%d\n", iSum);
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    MultFact(iValue);

    return EXIT_SUCCESS;
}
