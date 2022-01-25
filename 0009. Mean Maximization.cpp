/*   Link :   https://www.codechef.com/problems/MEANMAX

JJ loves playing with averages. He has an array A of length N. He wants to divide the array A into two non-empty subsets P and Q such that 
the value of mean(P) + mean(Q) is as large as possible. (Note that each Ai must belong to either subset P or subset Q).
Help him find this maximum value of mean(P) + mean(Q).

For example, mean([3,1,4,5]) = (3+1+4+5) / 4 = 3.25.

                   Sample Input :
     Testcase :    2
     N :           2
     Values :      4 5
     N :           5
     Values :      2 2 2 2 2

                   Sample Output : 
                   9.000000
                   4.000000
                   
     APPROACH : 
     1. Take the maximum element and put it in subset P.
     2. All other elements put in subset Q.
     3. Take averages of both subset P and Q then return addition of both averages as a result. 
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
	    
	    int A[N] , sum = 0;
	    
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	        sum = sum + A[i];
	    }
	    
	    int max = *max_element(A, A+N);
	    double avg = (double)(sum - max) / (N - 1);
	    avg += max;
	    
	    cout << fixed << setprecision(10) << avg << endl;
	}
	return 0;
}

