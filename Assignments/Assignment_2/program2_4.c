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
                User will input the frequency
                If the frequency is negative then we will update it to positive number
                The loop will roatate till the condition becomes false
                Print the inputed number as many times the loops becomes true
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
//  Input         : Integer, Frequency
//  Output        : None
//  Description   : Displays the inputed number as many times as the frequency
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for( iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
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
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", & iValue);

    printf("Enter frequency: ");
    scanf("%d", & iCount);

    Display(iValue, iCount);

    return 0;
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  Input       Output
//  5, 6        5	5	5	5	5	5
//  7, 2        7	7
//  13, 4       13	13	13	13
//
//////////////////////////////////////////////