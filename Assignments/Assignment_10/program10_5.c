#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : SquareMeter
//          Input         : 5   
//          Output        : 0.464515
//          Description   : Convert square feet into square meter
//          Date          : 02/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d",&iValue);

    dRet =  SquareMeter(iValue);

    printf("Area in square meters is %f\n", dRet);

    return EXIT_SUCCESS;
}
