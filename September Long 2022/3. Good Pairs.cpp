/*  Link :   https://www.codechef.com/submit/EQPAIR

    You are given an array A of length N.
    A pair (i, j) (1 ≤ i < j ≤ N) is said to be good if gcd(Ai, Aj) = lcm(Ai, Aj). Here gcd denotes the greatest common divisor and lcm denotes least common multiple.
    Find the total number of good pairs present in the given array.
    
    Sample 1:
          Input :
                5
                2
                5 9
                5
                1 5 5 5 9
                8
                2 5 5 2 9 9 9 12
                4
                12 12 18 18
                5
                12 15 10 5 9
        Output :
                0
                3
                5
                2
                0
        Explanation:
                Test case 1: No good pair is present.
                Test case 2: The good pairs (i, j) are: (2,3),(3,4), and (2,4). To elaborate, gcd(A2, A3) = lcm(A2, A3) = 5
                Test case 3: The good pairs (i,j) are: (1,4),(2,3),(5,6),(6,7), and (5,7). To elaborate, gcd(A1, A4) = lcm(A1, A4) = 2
                Test case 4: The good pair (i,j) are: (1,2) and (3,4). To elaborate, gcd(A3, A4) = lcm(A3, A4) = 18
                Test case 5: No good pair is present.
*/




#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        long long n;
        cin >> n;
        
        long long arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        unordered_map<long,long> m;
        for(auto i : arr)
        {
            m[i]++;
        }
        
        long long ans = 0;
        for(auto i : m)
        {
            if(i.second > 1)
            {
                ans += i.second * (i.second - 1)/2;
            }
        }
        
        cout << ans << endl;
    }
	return 0;
}



