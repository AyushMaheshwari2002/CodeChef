/*  Link :   https://www.codechef.com/CCSTART2/problems/ADDNATRL

   You are given a number N. Find the sum of all numbers from 1 to N.

            Sample Input 1:
            4
            Sample Output 1:
            10

            Sample Input 2:
            8
            Sample Output 2:
            36

            EXPLANATION:
            In the first example, (1 + 2 + 3 + 4) = 10.
            In the second example, (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8) = 36.
*/


#include<iostream>
using namespace std;

int main()
{
    long N;
    cin >> N;
    
    cout << ((N * (N + 1)) / 2) <<endl;
    
    return 0;
}

