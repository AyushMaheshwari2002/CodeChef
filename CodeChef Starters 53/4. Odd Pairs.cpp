/*  Link :    https://www.codechef.com/submit/ODDPAIRS

    Given an integer N, determine the number of pairs (A,B) such that:
            * 1 ≤ A,B ≤ N;
            * A + B is odd.

    Sample 1:
          Input :
              5
              1
              2
              3
              100
              199
              
          Output :
              0
              2
              4
              5000
              19800
              
          Explanation:
              Test case 1: There are no pairs satisfying the given conditions.
              Test case 2: The pairs satisfying both conditions are: (1,2) and (2,1).
              Test case 3: The pairs satisfying both conditions are: (1,2),(2,1),(2,3), and (3,2).
*/




#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        long int even_pair = n / 2;
        long int odd_pair = n / 2;
        
        if(n % 2 != 0)
        {
            odd_pair++;
        }
        
        cout << 2 * (odd_pair * even_pair) << endl;
    }
	return 0;
}




