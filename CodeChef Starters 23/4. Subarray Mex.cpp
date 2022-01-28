/*   Link :   https://www.codechef.com/START23C/problems/SUBMEX

    Chef was on vacation when a thought struck him. Given three integers N,K, and X, he would like to make an array A of length N such that it satisfies 
    the following conditions:

           1. 0 ≤ Ai ≤ N for each 1 ≤ i ≤ N
           2. The MEX of every contiguous subarray of length K in A is X.
    Please help Chef in finding such an array. If there are multiple answers, you can output any configuration; and if there is no possible answer, output −1.

              Sample Input :
  Testcases : 3
              3 3 3
              4 3 2
              5 4 5

              Sample Output : 
              0 1 2
              1 0 1 1
              -1

              Explanation :
              Test Case 1: One possible answer is [0,1,2]. The subarray of length 3 has MEX 3. Other possible answers are [0,2,1], [1,0,2], [1,2,0], [2,0,1], [2,1,0].
              Test Case 2: One possible answer is [1,0,1,1]. There are two subarrays of length 3 — [1,0,1] and [0,1,1]. Both of them have MEX 2, as required.
              Test Case 3: There is no array that satisfies the given conditions.
*/



#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n, k, x;
	    cin >> n >> k >> x;
	    
	    if(k < x)
	    {
	        cout << "-1" <<endl;
	        continue;
	    }
	    
	    int count = 0;
	    while(n--)
	    {
	        cout << count % x <<" ";
	        count++;
	    }
	    cout << endl;
	}
	return 0;
}

