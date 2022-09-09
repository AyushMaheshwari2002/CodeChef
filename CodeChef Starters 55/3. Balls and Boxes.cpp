/*  Link :    https://www.codechef.com/submit/BALLBOX

    You have N balls and K boxes. You want to divide the N balls into K boxes such that:
          * Each box contains ≥ 1 balls.
          * No two boxes contain the same number of balls.
    Determine if it is possible to do so.

    Sample 1:
         Input :
              4
              3 4
              30 3
              2 2
              1 1
        Output :
              NO
              YES
              NO
              YES
        Explanation:
              Test Case 1: It is not possible to divide the 3 balls into 4 boxes such that each box contains ≥ 1 balls.
              Test Case 2: One way to divide the 30 balls into 3 boxes is the following: [5, 9, 16].
              Test Case 3: It is not possible to divide the 2 balls into 2 boxes such that no two boxes contain the same number of balls.
              Test Case 4: We can divide 1 ball into 1 box.
*/




#include <iostream>
using namespace std;

int main()
{
    int t;
	cin >> t;
	
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    
	    long ans = (k*(k+1))/2;
	    
	    if(ans <= n)
	    {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	    
	}
	return 0;
}



