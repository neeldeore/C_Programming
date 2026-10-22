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
                Check if the char is vowel
                if it is then print it is a vowel
                if it is not then print it is nt a vowel
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

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Input         : Char
//  Output        : Define the char if it is vowel or not
//  Description   : Displays the cahr if it is vowel or not vowel
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

BOOL ChkVowel(char ch)
{
    if( ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: ");
    scanf("%c", & cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  Input       Output
//  a           vowel
//  I           vowel
//  r           not vowel
//
//////////////////////////////////////////////