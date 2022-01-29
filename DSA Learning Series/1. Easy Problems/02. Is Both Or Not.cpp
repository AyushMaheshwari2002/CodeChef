/*  Link :   https://www.codechef.com/CCSTART2/problems/ISBOTH

   You're given a number N. If N is divisible by 5 or 11 but not both then print "ONE"(without quotes). If N is divisible by both 5 and 11 then print "BOTH"(without quotes).
   If N is not divisible by 5 or 11 then print "NONE"(without quotes).
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{	
    int N;
    cin >> N;
    
    if(N % 5 == 0 && N % 11 == 0)
        cout << "BOTH" << endl;
    
    else if(N % 5 == 0 || N % 11 == 0)
        cout << "ONE" << endl;
        
    else
        cout << "NONE" << endl;
	return 0;
}

