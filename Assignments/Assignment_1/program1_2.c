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
//          Printing Marvellous 5 Times using for loop
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              Give "i" the default value
                Then make "i" value equal to 1
                For the loop to rotate give the condition
                Print the sentence
                Increment the number every time the condition becomes TRUE
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
//  Output        : None
//  Description   : Displays "Marvellous" five times
//  Date          : 22/01/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

void Display()
{
    int i = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
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
// Marvellous
// Marvellous
// Marvellous
// Marvellous
// Marvellous
//
//////////////////////////////////////////////