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
//          And we have to print that many even factors of that number
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              Accept a number from the user
                If the number is less than or equal to stop
                Loop through all numbers from 1 to iNo/2
                Check weather is the factor and is even number
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
//  Function Name : DisplayEvenFactor
//  Input         : Integer
//  Output        : Print the factors only which are even
//  Description   : Displays the even factor number of the integer
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0 && (iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
        
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

    DisplayEvenFactor(iValue);

    return 0;
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  Input       Output
//  36          2   4   6   12  18
//  80          2   4   8   10  16  20  40 
//
//////////////////////////////////////////////