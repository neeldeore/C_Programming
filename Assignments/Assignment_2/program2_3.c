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
                If the number is less than 10 it will print "Hello"
                If the number is greater than 10 it will print"Demo""
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
//  Output        : Hello || Demo
//  Description   : Displays Hello if inputed value is less than 10 or display demo if it is greater than 10
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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
//  5           Hello
//  7           Hello
//  13          Demo
//
//////////////////////////////////////////////