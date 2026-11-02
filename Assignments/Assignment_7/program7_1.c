#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern        
//          Input         : 5
//          Output        : $   *   $   *   $   *   $   *   $   *
//          Description   : Print the pattern of $ and * based on the input number
//          Date          : 02/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("$\t");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}