#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : DollarToINR
//          Input         : 10
//          Output        : 700
//          Description   : Convert Dollar to Indian Rupees
//          Date          : 02/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    return iNo * 70;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return EXIT_SUCCESS;
}