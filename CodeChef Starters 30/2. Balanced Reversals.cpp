/*   Link :    https://www.codechef.com/START30C/problems/BALREV

    Chef is given a binary string A of length N. He can perform the following operation on A any number of times:
          * Choose L and R (1≤L≤R≤N), such that, in the substring A[L,R], the number of 1s is equal to the number of 0s and reverse the substring A[L,R].
    Find the lexicographically smallest string that Chef can obtain after performing the above operation any (possibly zero) number of times on A.

    String X is lexicographically smaller than string Y, if either of the following satisfies:
          * X is a prefix of Y and X≠Y.
          * There exists an index i such that Xi<Yi and Xj=Yj,∀j such that 1≤j<i.
          
          Sample Input 1 
          2
          5
          01100
          4
          0000
          Sample Output 1 
          00011
          0000
          Explanation
          Test Case 1: Chef can choose L=2 and R=5. The chosen substring, A[2,5]=1100. On reversing this, we get 0011. Thus, the final string is A=00011. 
          Note that this is the lexicographically smallest string possible.
          Test Case 2: Since the string is already lexicographically minimum, Chef does not need to apply any operation.
*/



#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        sort(s.begin() , s.end());
        cout << s << endl;
    }
	return 0;
}



