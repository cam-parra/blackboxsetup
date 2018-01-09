/***********************************************************************
* Program:
*    Lab 00, Practice Lab Submission
*    Brother Jones, CS345
* Author:
*    Cam Parra
* Summary:
*    Just a simple program that checks for times a integer is entered.
*    If the user puts in a 0 the process stops. It uses user defines
*    to make the function smaller (sorry to those reading the code).
*    It also exploits the for loop to do all computations and logic
*    with the AND operator.
************************************************************************/
#include <iostream>
using namespace std;

#define PROMPT "Enter an integer: "
#define ZERO "No non-zero integers were entered.\n"
#define ENTERED "You entered "
#define NUM " integer"

/**********************************************************************
* Logic for AND is that only  will pass if all conditions are met. So
* this code works because COUT and CIN will test true but will fail
* when i = 0. Then this code then uses conditional ternarys to figure
* out how to display the result.
***********************************************************************/
int main()
{
   int c = 0;
   for (int i = 0; cout << PROMPT  && cin >> i && i != 0;++c);
   (c == 0) ? cout << ZERO : (c == 1) ? cout << ENTERED << c << NUM << ".\n" :
      cout << ENTERED << c << NUM << "s.\n";
}
