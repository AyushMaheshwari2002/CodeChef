/*   Link :   https://www.codechef.com/START23C/problems/AVGOF3

      It is Chef's birthday. You know that Chef's favourite number is X. You also know that Chef loves averages. Therefore you decide it's best to gift 
      Chef 3 integers A1, A2, A3, such that:
              The mean of A1, A2 and A3 is X.
              1 ≤ A1, A2 , A3 ≤ 1000.
              A1, A2 and A3 are distinct.
      Output any suitable A1,A2 and A3 which you could gift to Chef.

                      Sample Input : 
      Testcases :     3
                      3
                      5
                      5

                      Sample Output :
                      1 3 5
                      1 6 8
                      3 5 7

                      Explanation :
                      Test Case 1: mean(1,3,5) = (1 + 3 + 5)/3 = 9/3 = 3
                      Test Case 2: mean(1,6,8) = (1 + 6 + 8)/3 = 15/3 = 5
                      Test Case 3: mean(3,5,7) = (3 + 5 + 7)/3 = 15/3 = 5
*/



#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;              //n = mean of three numbers
	    cin>> n;
	    
	    if(n == 0)
	        cout << 0 << " " << 0 << " " << 0;
	    else
	    {
	        cout << n-1 << " " << n << " " << n+1 << endl;
	    }
	}
	return 0;
}


