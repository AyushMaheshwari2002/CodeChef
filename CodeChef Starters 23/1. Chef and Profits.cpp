/*   Link  :   https://www.codechef.com/START23C/problems/CHFPROFIT

    Some time ago, Chef bought X stocks at the cost of Rs. Y each. Today, Chef is going to sell all these X stocks at Rs. Z each. 
    What is Chef's total profit after he sells them?
    Chef's profit equals the total amount he received by selling the stocks, minus the total amount he spent buying them.

                    Sample Input : 
    Testcases :     3
                    2 5 20
                    3 1 2
                    4 5 6

                    Sample Output : 
                    30
                    3
                    4
                    
     Explanation :
            Test Case 1: Chef bought X = 2 stocks for Y = 5 each, making the total amount spent by Chef = 2 * 5=10.
            Chef can sell this stock today for Z = 20, making the total amount received by Chef =2 * 20=40.
            The total profit is then the amount received minus the amount spent, which equals 40 − 10 = 30.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int X, Y, Z;
	    cin >> X >> Y >> Z;
	    
	    int profit = ((X*Z) - (X*Y));
	    cout << profit << endl;
	}
	return 0;
}

