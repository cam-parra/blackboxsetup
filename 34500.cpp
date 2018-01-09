/***********************************************************************
 * Program:
 *    Lab 00, Practice Lab Submission
 *    Brother Jones, CS345
 * Author:
 *    your name
 * Summary: 
 *    Enter a brief description of your program here!  Please note that if
 *    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
 ************************************************************************/

#include <iostream>
using namespace std;
/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()

{
  int input;
  int count = 0;
  while(cout << "Enter an integer: " &&cin >> input && input !=0)
    {
      count++;
      (count == 0) ? cout <<"" : cout << count <<endl;
    }
  return 0;
}
