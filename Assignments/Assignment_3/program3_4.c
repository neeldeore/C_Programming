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
//          user will input any char
//          we have to make it capital
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              Accept a char from the user
                Check if the char is lower case
                if it is then convert it into uppercase
                Check if the char is uppr case
                if it is then convert it into lowercase
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
//  Function Name : DisplayConvert
//  Input         : Char
//  Output        : Print the char opposite to its case
//  Description   : Displays the char uppercase if it is lowercase, else displayes lowercase if it is uppercase
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue + 32);
    }
}

//////////////////////////////////////////////
//
// Entry point of the application :
//
//////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c", & cValue);

    DisplayConvert(cValue);

    return 0;
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  Input       Output
//  a           A
//  B           b
//
//////////////////////////////////////////////