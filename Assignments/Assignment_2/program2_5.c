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
//          user will input the number
//          And if the inputed value is less than 10 it will print Hello
//          Otherwise it will print Demo
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              User will input a number
                If the number divide by 2 leaves remainder 0 then if will return True, else False
                It will return bRet
                If it is True then it will print Even
                If it is false then it will print Odd
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
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Input         : Integer
//  Output        : Even || Odd
//  Description   : Displays the inputed number it is Even or Odd
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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

    printf("Enter number: ");
    scanf("%d", & iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is Odd\n");
    }

    return 0;
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  Input       Output
//  10          Even
//  5           Odd
//
//////////////////////////////////////////////