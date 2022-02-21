/*   Link :   

    You are given an array A of length K. Find any permutation P of length N such that only the prefixes of length Ai (1≤i≤K) form a permutation.
    Under the given constraints, it is guaranteed that there exists at least one permutation which satisfies the given condition.
    If there are multiple solutions, you may print any.
    Note: A permutation of length N is an array where every element from 1 to N occurs exactly once.

              Sample Input 1 
              3
              8 4
              3 6 7 8
              7 1
              7
              5 5
              1 2 3 4 5
              Sample Output 1 
              2 3 1 6 4 5 7 8
              4 6 1 5 2 7 3
              1 2 3 4 5
              Explanation
              Test case-1: [2,3,1,6,4,5,7,8] is valid permutation because
              Prefix of length 3=[2,3,1] is a permutation.
              Prefix of length 6=[2,3,1,6,4,5] is a permutation.
              Prefix of length 7=[2,3,1,6,4,5,7] is a permutation.
              Prefix of length 8=[2,3,1,6,4,5,7,8] is a permutation.
              None of the other prefixes form a permutation.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        
        int arr[k];
        for(int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr , arr+k);
        
        vector<int> v;
        int prev = 0;
        for(int i = 0; i < k; i++)
        {
            for(int j = arr[i]; j > prev; j--)
            {
                v.push_back(j);
            }
            prev = arr[i];
        }
        
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
	return 0;
}



