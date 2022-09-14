/*  Link :  https://www.codechef.com/submit/SUBARRY

    You are given an array A of length N.
    The interesting value of a subarray is defined as the product of the maximum and minimum elements of the subarray.
    Find the minimum and maximum interesting value over all subarrays for the given array.
    Note: A subarray is obtained by deletion of several (possibly zero) elements from the beginning of the array and several (possibly zero) elements from the end of 
    the array.
    
    Sample 1:
         Input :
              2
              2
              2 2
              3
              5 0 9
        Output :
              4 4
              0 81
        Explanation:
            Test case 1: The minimum interesting value possible is 4. A subarray with interesting value equal to 4 is [2,2]. Here, both minimum and maximum elements of 
                         the subarray are 2. It can be proven that no subarray of the array has interesting value less than 4.
                         The maximum interesting value possible is 4. A subarray with interesting value equal to 44 is [2,2]. Here, both minimum and maximum elements of
                         the subarray are 2. It can be proven that no subarray of the array has interesting value greater than 4.
            Test case 2: The minimum interesting value possible is 0. A subarray with interesting value equal to 00 is [5,0,9]. Here, minimum element is 0 and maximum 
                         element is 9. It can be proven that no subarray of the array has interesting value less than 0.
                         The maximum interesting value possible is 81. A subarray with interesting value equal to 8181 is [9]. Here, both minimum and maximum elements 
                         of the subarray are 9. It can be proven that no subarray of the array has interesting value more than 81.
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
        
        sort(arr,arr+n);
        
        long long mx = max(arr[0]*arr[0], arr[n-1]*arr[n-1]);
        long long mn = 1e18;
        
        if(arr[0] < 0 && arr[n-1] > 0)
        {
            mn = arr[0] * arr[n-1];
        }
        else {
            for(int i = 0; i < n; i++)
            {
                mn = min(mn, arr[i]*arr[i]);
            }
        }
        
        cout << mn << "  " << mx << endl;
    }
        
	return 0;
}

nfhbnfknfg

