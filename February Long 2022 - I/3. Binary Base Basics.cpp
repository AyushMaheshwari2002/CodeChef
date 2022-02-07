/*   Link :   https://www.codechef.com/FEB221C/problems/BINBASBASIC

    You are given a binary string S and an integer K. In one operation, you can pick any bit and flip it, i.e turn 0 to 1 or 1 to 0. Can you make the 
    string S a palindrome using exactly K operations?
    Print YES if this is possible, and NO if it is not.

                        Sample Input 1 
      Testcases :       2
                        3 0
                        110
                        6 1
                        101100

                        Sample Output 1 
                        NO
                        YES

                        Explanation :
                        Test case 1: S is not a palindrome, and no operations can be performed on it because K=0.
                        Test case 2: Flip the first bit to obtain S=001100, which is a palindrome.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int N, K;
	    cin >> N >> K;
	    
	    string S;
	    cin >> S;
	    
	    int count = 0;
	    
	    int low = 0, high = N-1;                   //S.length() = N
	    
	    while(low < high)
	    {
    	    if(S[low] != S[high])
    	    {
    	        count++;
    	    }
    	    low++;
    	    high--;
	    }
	    
	    if(N % 2)
	    {
	        if(count <= K)
	        {
	            cout << "YES" << endl;
	        }
	        else {
	            cout << "NO" << endl;
	        }
	    }
	    else
	    {
	        if(count <= K and (K - count) % 2 == 0)
	        {
	            cout << "YES" << endl;
	        }
	        else {
	            cout << "NO" << endl;
	        }
	    }
	}
	return 0;
}


