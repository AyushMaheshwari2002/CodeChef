/*  Link :   https://www.codechef.com/submit/MEANMEDIAN

    Chef has two numbers X and Y. Chef wants to find three integers A, B, and C such that:
             * −1000 ≤ A, B, C ≤ 1000
             * mean([A, B, C]) = X
             * median([A, B, C]) = Y
    Can you help Chef find such three integers?
    As a reminder, mean([P, Q, R]) = (P + Q + R)/3 and median([P, Q, R]) is the element at the 2nd(middle) position after we sort [P, Q, R] in non-decreasing order.

    Sample 1:
         Input :
                3
                5 5
                67 100
                4 5
        Output :
                5 5 5
                0 100 101
                0 5 7
        Explanation:
                Test Case 1: mean([5, 5, 5]) = (5 + 5 + 5)/3 = 5, median([5, 5, 5]) = 5.
                Test Case 2: mean([0, 100, 101]) = (0 + 100 + 101)/3 = 201/3 = 67, median([0, 100, 101]) = 100.
                Test Case 3: mean([0, 5, 7]) = (0 + 5 + 7)/3 = 4, median([0, 5, 7]) = 5.
*/




#include <iostream>
using namespace std;

int main() 
{
	long long t;
	cin >> t;
	
	while(t--)
	{
	    long long x, y;
	    cin >> x >> y;
	    
	    cout << min(3*x - 2*y, y) <<" " << y <<" " << max(3*x - 2*y, y) << endl;
	}
	
	return 0;
}



