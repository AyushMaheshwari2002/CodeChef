/*  Link :   https://www.codechef.com/problems/PERFPERM

    An index i in a permutation P of length N is said to be good if: Pi is divisible by i
    You are given 2 integers N and K. You need to construct a permutation P of length N such that exactly K indices in that permutation are good.
    If no such permutation exists, output −1.
    If multiple such permutations exist, output any.

            Sample Input 1 
            2
            1 1
            6 2
            Sample Output 1 
            1
            4 5 6 1 2 3
            Explanation
            Test case-1: In [1], P1=1 is divisible by 1. Therefore it is a valid permutation having 1 good index.
            Test case-2: In [4,5,6,1,2,3], P1=4 is divisible by 1 and P3=6 is divisible by 3. Therefore it is a valid permutation having 2 good indices.
*/


#include <bits/stdc++.h>
using namespace std;

void solve()
{
        int n , k;
        cin >> n >> k;
        
        vector<int> v;
        for(int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        if(n == 1)
        {
            cout << 1 << endl;
            return;
        }
        if(k == n-1)
        {
            swap(v[0] , v[1]);
            
            for(int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            return;
        }
  
        int sw = 0;
        k = n-k;
        while(k--)
        {
            swap(v[sw] , v[sw + 1]);
            sw++;
        }
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
}
      
int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        solve();
    }
	  return 0;
}


