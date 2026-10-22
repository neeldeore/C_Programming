/*
    step 1: Understand the problem statement
    step 2: Write the algorithm
    step 3: Decide the programming language
    step 4: Write the program
    step 5: Test the program

*/

//////////////////////////////////////////////
//
// Step 1 : Understand the problem statement
//          User is going to enter any integer
//          If it is divisible by 5 it will display like wise
//          If it is not divisble by 5 it will display like wise
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              Store the integer in iNo
                Check if it is divisible by 5
                If it is it will return TRUE boolen value
                If it is not it will return False boolean value
                As per condition it will display the result
            STOP
*/                  
//////////////////////////////////////////////

//////////////////////////////////////////////
//
// Step 3 : Decide the programming language
//          We select C programming
//////////////////////////////////////////////

//////////////////////////////////////////////
//
// Step 4 : Write the program
//
//////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////
//
//  Function Name : Check
//  Input         : Integer
//  Output        : Integer
//  Description   : Performs division
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if(( iNo % 5 ) == 0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////
//
// Entry point of the application :
//
//////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  Input   Output
//  25      Divisible by 5
//  46      Not Divisible by 5
//////////////////////////////////////////////