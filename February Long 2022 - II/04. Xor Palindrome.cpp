/*   Link :   https://www.codechef.com/FEB222C/problems/XORPAL

    A (1-indexed) binary string S of length N is called a xor palindrome if the value of Si⊕S(N+1−i) is the same for all 1≤i≤N.

    For example, 0, 1111 and 0101 are xor palindromes, while 1110 and 110101 are not.

    You are given a binary string S of length N. Determine if it is possible to rearrange it to form a xor palindrome or not.

                Sample Input 1 
    Testcases : 4
                2
                00
                4
                0011
                3
                001
                4
                0001
                Sample Output 1 
                YES
                YES
                YES
                NO
                Explanation :
                Test case 1: 00 is already a xor palindrome. [The value of Si⊕S(N+1−i) is 0 for all 1≤i≤N.]
                Test case 2: 0011 is already a xor palindrome. [The value of Si⊕S(N+1−i) is 1 for all 1≤i≤N.]
                Test case 3: 001 can be rearranged to form 010 which is a xor palindrome. [The value of Si⊕S(N+1−i) is 0 for all 1≤i≤N.]
                Test case 4: It can be proved that 0001 can not be rearranged to form a xor palindrome.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int N;
        cin >> N;
        
        string S;
        cin >> S;
        
        int zero = 0, one = 0;
        
        for(int i = 0; i < S.length(); i++)
        {
            if(S[i] == '0')
                zero++;
            else
                one++;
        }
        
        if(N % 2 == 0)                 //if string length is even
        {
            if(zero == one)
                cout << "YES" << endl;
            else if(zero % 2 == 0 && one % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else                              //if string is odd
        {
            cout << "YES" << endl;
        }
    }
	return 0;
}



