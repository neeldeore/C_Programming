#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FhtoCs
//          Input         : 10
//          Output        : -12.2222
//          Description   : Convert Farenheit temperature into Celsius
//          Date          : 02/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * 5 / 9;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %f\n", dRet);

    return EXIT_SUCCESS;
}
