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
//          The 2 numbers are already defined 15, 5
//          And we have to divide them
//
//////////////////////////////////////////////
// Step 2 : Write the algorithm
//          START
/*              No1 is already defined as iValue1 = 15 which will be stored in iNo1
                No2 is already defined as iValue2 = 5 which will be stored in iNo2
                Create the variable as Ans to store the result
                Perform the division and store into Ans
                Display the Ans
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
//  Function Name : Divide
//  Input(Given)  : Integer, Integer
//  Output        : Integer
//  Description   : Performs division
//  Date          : 22/10/2026
//  Author        : Neel Dilip Deore
//  
//////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if (iNo2 > iNo1)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1 , iValue2);

    printf("Division is %d", iRet);
    
    return 0;
    
}

//////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test cases
//
//  Input1  Input2  Output
//  15      5       3
//////////////////////////////////////////////