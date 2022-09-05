/*  Link :    https://www.codechef.com/submit/MAKEABEQUAL

    Chef is given two arrays A and B of length N each.
    In one operation Chef can choose one element of A and one element of B and increase them by 1.
    More formally: Chef can pick two integers i,j (1≤i,j≤N) and increment Ai and Bj by 1.
    Determine the minimum number of operations required to make A and B equal.
    Output -1 if it is not possible to make A and B equal.
    
    Sample 1:
          Input :
              3
              2
              1 2
              2 1
              3
              1 1 2
              2 2 1
              3
              4 6 8
              5 7 6
              
         Output :
              1
              -1
              2
              
        Explanation:
              Test case 1: We can choose i = 1 and j = 2 and increment Ai and Bj by 1. Thus, both arrays become [2,2] and are equal. We require only 1 operation to 
                           make these arrays equal. It can be proven that the arrays cannot be made equal in less than one operation.
              Test case 2: Both the arrays cannot be made equal using any number of operations.
              Test case 3: We perform 2 operations as follows:
                           * Choose i = 1, j = 3: The arrays become A = [5, 6, 8] and B = [5, 7, 7].
                           * Choose i = 2, j = 3: The arrays become A = [5, 7, 8] and B = [5, 7, 8].
                            Thus, both arrays can be made equal using 2 operations.
*/




#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;                // length of array A and B 
        cin >> n;
        
        long long a[n], b[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        long long diff1 = 0, diff2 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            diff1 = diff1 + (a[i] - b[i]);
            diff2 = diff2 + abs(a[i] - b[i]);
        }
        
        if(diff1 != 0 || diff2 % 2 != 0)
        {
            cout << -1 << endl;
        }
        else {
            cout << diff2/2 << endl;
        }
    }
	return 0;
}





