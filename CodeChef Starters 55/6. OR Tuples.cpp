/*  Link :   https://www.codechef.com/submit/ORTUPLES

    Chef has 3 numbers P, Q and R. Chef wants to find the number of triples (A, B, C) such that:
           * (A | B) = P, (B | C) = Q and (C | A) = R (Here, | denotes the bitwise OR operation)
           * 0 ≤ A,B,C < 20
    Can you help Chef?

    Sample 1:
         Input :
                3
                10 12 14
                0 5 5
                0 0 7
          Output :
                4
                1
                0
          Explanation:
                Test case 1: The following 4 triplets (A, B, C) satisfy A|B = 10, B|C = 12, and C|A = 14 : (2, 8, 12), (10, 0, 12), (10, 8, 4) and (10, 8, 12).
                Test case 2: The following triplet (A, B, C) satisfies A|B = 0, B|C = 5, and C|A = 5 : (0, 0, 5).
                Test case 3: There are no triplets satisfying all the conditions.
*/



#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    long p, q, r;
	    cin >> p >> q >> r;
	    
	    long arr[4] = {1,0,1,4};
	    long ans = 1;
	    
	    for(int i = 0; i < 50; i++)
	    {
	        ans *= arr[((p>>i)&1)+((q>>i)&1)+((r>>i)&1)];
	    }
	    
	    cout << ans << endl;
	}
	return 0;
}

