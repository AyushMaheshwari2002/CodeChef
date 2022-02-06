/*   Link :   https://www.codechef.com/FEB221C/problems/CHEFBARBER

    Chef recently realized that he needs a haircut, and went to his favorite hair salon. At the salon, he found N customers waiting for their haircuts. 
    From his past experience, Chef knows that the salon takes M minutes per customer. Only one person can get their haircut at a time.

    For how many minutes will Chef have to wait before he can get his haircut?

                  Sample Input 
    Testcases :   2
                  2 15
                  0 15

                  Sample Output
                  30
                  0
                  
                  Explanation :
                  Test case 1: There are 2 customers waiting for the haircut and the salon will take 15 minutes for each customer, hence Chef will have to wait 
                  for 30 minutes before he can get his haircut.

                  Test case 2: There are 0 customers waiting for the haircut, therefore the Chef will not have wait to get the haircut.
*/


#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int N, M;
	    cin >> N >> M;
	    
	    cout << N * M << endl;
	}
	return 0;
}

