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
//          And we have to print that many even number starting from 2
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              Accept a number from the user
                If the number is less than or equal to stop
                Keep printing by 2 till the loop fails
                Increment the number
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
//  Function Name : PrintEven
//  Input         : Integer
//  Output        : Print that many even number
//  Description   : Displays the even number by the integer
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
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

    PrintEven(iValue);

    return 0;
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  Input       Output
//  5           2   4   6   8   10
//  7           2   4   6   8   10  12  14
//
//////////////////////////////////////////////