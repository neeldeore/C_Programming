#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CircleArea
//          Input         : 10.4
//          Output        : 339.62
//          Description   : Print the area of a circle with the given radius
//          Date          : 02/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    const float PI = 3.14159;
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f\n", dRet);

    return EXIT_SUCCESS;
}
