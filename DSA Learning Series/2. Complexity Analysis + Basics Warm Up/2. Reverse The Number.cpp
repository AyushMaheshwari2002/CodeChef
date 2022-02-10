/*  Link :   https://www.codechef.com/LRNDSA01/problems/FLOW007

    Given an Integer N, write a program to reverse it.
    
                    Sample Input
     Testcases :    4
                    12345
                    31203
                    2123
                    2300
                    Sample Output  
                    54321
                    30213
                    3212
                    32
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		int rev = 0;
		
		while(n != 0)
		{
			int rem = n % 10;
			rev = (rev * 10) + rem;
			n = n / 10;
		}
		cout << rev << endl;
	}
}

