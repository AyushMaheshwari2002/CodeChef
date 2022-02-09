/*   Link :   https://www.codechef.com/CCSTART2/problems/SUMEVOD

    You are given a number N and find the sum of the first N odd and even numbers in a line separated by space. All even and odd numbers should be greater than 0.

                  Sample Input 1:
                  4
                  Sample Output 1:
                  16 20
                  Sample Input 2:
                  1
                  Sample Output 2:
                  1 2
                  EXPLANATION:
                  In the first example, (1 + 3 + 5 + 7) = 16 and (2 + 4 + 6 + 8) = 20.
                  In the second example, only one odd that is 1 and only one even that is 2.
*/


#include <iostream>
using namespace std;

int main()
{
    long n;
    cin >> n;
    
    cout << n * n << " ";                   //formula for odd numbers
    cout << n * (n + 1);                    //formula for even numbers
    return 0;
}


