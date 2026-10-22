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
//          we have to print 5 to 1
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              Give "i" the default value
                Then equalize i equal to 5
                For the loop to roatate give the condition
                Print the sequnece when the condition is True
                And decrement till condition becomes false
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
//  Input         : None
//  Output        : Sequence of Numbers
//  Description   : Performs sequence of number from 5 to 1
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

int Display()
{
    int i = 0;

    i = 5;

    while( i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

//////////////////////////////////////////////
//
// Entry point of the application :
//
//////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  5
//  4
//  3
//  2
//  1
//
//////////////////////////////////////////////