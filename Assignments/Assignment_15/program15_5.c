#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Percentage
//          Input         : 1000    745
//          Output        : 74.5%
//          Description   : Accept the total marks and obtained marks from user and calculate the percentage
//          Date          : 04/11/2026
//          Author        : Neel Dilip Deore  
//////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotalMarks, int iObtainedMarks)
{
    float fPercentage = 0.0f;
    fPercentage = ((float)iObtainedMarks / (float)iTotalMarks) * 100.0f;
    return fPercentage;
}

int main()
{
    int iTotalMarks = 0, iObtainedMarks = 0;
    float fResult = 0.0f;

    printf("please enter total marks and obtained marks : \n");
    scanf("%d %d", &iTotalMarks, &iObtainedMarks);

    fResult = Percentage(iTotalMarks, iObtainedMarks);

    printf("Percentage: %.1f%%\n", fResult);

    return EXIT_SUCCESS;
}

//revises