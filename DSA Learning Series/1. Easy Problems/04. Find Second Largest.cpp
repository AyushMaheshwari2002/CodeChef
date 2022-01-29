/* Link :  https://www.codechef.com/CCSTART2/problems/SECLAR

  Given three distinct integers A, B and C, print the second largest number among them.

            Sample Input 1:
            2
            7
            21
            Sample Output 1:
            7

            Sample Input 2:
            14
            28
            16
            Sample Output 2:
            16
*/


#include <iostream>
using namespace std;

int main() 
{	
    int A, B, C;
    cin >> A >> B >> C;
    
    if((A > B && A < C) || (A < B && A > C))
        cout << A << endl;
        
    else if((B > A && B < C) || (B < A && B > C))
        cout << B << endl;
        
    else
        cout << C << endl;
    
	return 0;
}

