/*   Link :    https://www.codechef.com/START30C/problems/SWAPCW

    Chef is working on his swap-based sorting algorithm for strings.
    Given a string S of length N, he wants to know whether he can sort the string using his algorithm.

    According to the algorithm, one can perform the following operation on string S any number of times:
    * Choose some index i (1≤i≤N) and swap the ith character from the front and the ith character from the back.
      More formally, choose an index i and swap Si and S(N+1−i).
      For example, d––cba–– can be converted to a––cbd–– using one operation where i=1.

    Help Chef find if it is possible to sort the string using any (possibly zero) number of operations.

            Sample Input 1 
            3
            4
            dbca
            3
            ccc
            3
            bza
            Sample Output 1 
            YES
            YES
            NO
            Explanation
            Test case 1: Chef can sort the string using 1 operation.
            Choose i=1 and swap S1=d and S4=a. This way, the string becomes abcd. Hence, the string is sorted.
            Test case 2: Chef needs 0 operations to sort this string as it is already sorted.
            Test case 3: It can be proven that the given string cannot be sorted using any number of operations.
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
        
        string temp = s;
        
        sort(s.begin() , s.end());
        
        for(int i = 0; i < n; i++)
        {
            if(temp[i] != s[i])
            {
                char x = temp[i];
                temp[i] = temp[n-1-i];
                temp[n-1-i] = x;
            }
        }
        
        if(temp == s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}



