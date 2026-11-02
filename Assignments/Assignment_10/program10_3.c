#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : KMtoMeter
//          Input         : 5
//          Output        : 5000
//          Description   : Convert distance kilometer into meter
//          Date          : 02/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is %d\n", iRet);

    return EXIT_SUCCESS;
}
