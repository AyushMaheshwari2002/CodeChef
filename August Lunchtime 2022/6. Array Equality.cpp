/*  Link :    https://www.codechef.com/submit/ARREQU

    Chef has an array of N integers. Chef can rearrange this array in any manner.
    Chef doesn’t like the array if any two adjacent elements are equal. Determine whether there exists a rearrangement of the array that Chef likes.
    
    Sample 1:
            Input :
                  2
                  5
                  1 1 1 1 1
                  3
                  3 3 4
            Output :
                  No
                  Yes
            Explanation:
                  Test case 1: There exists no rearrangement of the array which Chef will like.
                  Test case 2: A rearrangement of the array that Chef likes is [3,4,3]. Note that in this rearrangement, no two adjacent elements are equal.
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
	    
	    int array[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> array[i];
	    }
	    
	    set<int> st;
	    map<int,int> m;
	    for(auto i : array)
	    {
	        st.insert(i);
	        m[i]++;
	    }
	    
	    int ans = INT_MIN;
	    for(auto i : m)
	    {
	        if(i.second > ans)
	        {
	            ans = i.second;
	        }
	    } 
	        
	    if(n % 2 == 0 && ans <= (n/2) && m.size() >= 2)
	    {
	        cout << "Yes" << endl;
	    }
	    else if(n % 2 && ans <= ((n/2) + 1) && m.size() >= 2)
	    {
	        cout << "Yes" << endl;
	    }
	    else 
	    {
	        cout << "No" << endl;
	    }
	}
	return 0;
}



