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
//          and we will print that many number of * in sequence
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              User will input a number
                If it is a negative number then we will update it to positive number
                In while condition the loop will roatate till the condition becomes falls
                Print "*" as many times the loops becomes true
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
//  Function Name : Display
//  Input         : Integer
//  Output        : *
//  Description   : Performs sequence of * as per integer value
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt <= iNo)
    {
        printf("*");
        iCnt++;
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

    printf("Enter number: ");
    scanf("%d", & iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  Input       Output
//  5           *****
//  7           *******
//  -5          *****
//
//////////////////////////////////////////////