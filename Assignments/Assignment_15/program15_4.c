#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Multiply
//          Input         : 10  10  0
//          Output        : 100
//          Description   : Multiply all numbers (handle the case of zero like neglect the multiplication of zero)
//          Date          : 04/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)   
{
    int iResult = 0;
    
    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    iResult = iNo1 * iNo2 * iNo3;
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iResult = 0;

    printf("please enter three numbers : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iResult = Multiply(iValue1, iValue2, iValue3);

    printf("Result: %d\n", iResult);

    return EXIT_SUCCESS;
}
