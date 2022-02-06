/*  Link :   https://www.codechef.com/FEB221C/problems/EUREKA

    Chef, being a Chess fan, was thrilled after he read the following news:
    Although the formula is valid for large N, Chef is interested in finding the value of function f(N) = (0.143⋅N)N for a given small value of N. 
    Since Chef is busy understanding the proof of the formula, please help him calculate this value.

    Print the answer rounded to the nearest integer. That is, if the actual value of f(N) is x,

    Print ⌊x⌋ if x − ⌊x⌋ < 0.5
    Otherwise, print ⌊x⌋ + 1
    where ⌊x⌋ denotes the floor of x.

                          Sample Input 1 
        Testcases :       2
                          4
                          10

                          Sample Output 1 
                          0
                          36

                          Explanation : 
                          Test case 1: f(N) = (0.143⋅4)^4 = 0.107, which when rounded to nearest integer gives 0.
                          Test case 2: f(N) = (0.143⋅10)^10 = 35.7569, which when rounded to nearest integer gives 36.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    double ans = pow(0.143 * N, N);
	    
	    if((ans - floor(ans)) < 0.5)
	        cout << floor(ans) << endl;
	        
	    else
	        cout << floor(ans) + 1 << endl;
	}
	return 0;
}

