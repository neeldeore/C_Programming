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
//          we are printing sequence of star
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              Give "iCnt" the default value
                Then equalize i equal to 1
                For the loop to roatate give the condition
                Print the sequnece when the condition is True
                And increment till condition becomes false
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
//  Function Name : Accept
//  Input         : None
//  Output        : None
//  Description   : Performs sequence of *
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
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
    iValue = 5;

    Accept(iValue);
    return 0;
}