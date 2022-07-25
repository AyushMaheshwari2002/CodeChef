/*  Link :    https://www.codechef.com/LRNDSA01/problems/MULTHREE

    Consider a very long K-digit number N with digits d0, d1, ..., dK-1 (in decimal notation; d0 is the most significant and dK-1 the least significant digit). This 
    number is so large that we can't give it to you on the input explicitly; instead, you are only given its starting digits and a way to construct the remainder of 
    the number.
    Specifically, you are given d0 and d1; for each i ≥ 2, di is the sum of all preceding (more significant) digits, modulo 10 — more formally, the following formula
    must hold: 
    Determine if N is a multiple of 3.

    Sample 1:
          Input
           T :  3
                5 3 4
                13 8 1
                760399384224 5 1
                
          Output
                NO
                YES
                YES
                
    Explanation:
            Example case 1: The whole number N is 34748, which is not divisible by 3, so the answer is NO.
            Example case 2: The whole number N is 8198624862486, which is divisible by 3, so the answer is YES.
*/




#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    long long int k;
	    cin >> k;
	    
	    int d0, d1;
	    cin >> d0 >> d1;
	    
	    int d2 = (d0 + d1) % 10;
	    int d3 = (2 * d2) % 10;         
	    /* d3 = (d0 + d1 + d2) % 10
	       d3 = (d0 + d1 + (d0 + d1) % 10) % 10
	       d3 = (d0 % 10 + d1 % 10 + d0 % 10 + d1 % 10) % 10
	       d3 = 2 * (d0 + d1) % 10
	       d3 = (2 * d2) % 10
	   */
	   int d4 = (4 * d2) % 10;
	   int d5 = (8 * d2) % 10;
	   int d6 = (6 * d2) % 10;
	   /* we can't take d7,d8,d9... b'coz it will form loops*/
	   
	   /* After that we have count how many times d7,d8,d9,... appears in a number
	      we will always divide it by 4 b'coz it forms loop every time after finding 4th number */
	   
	   long long int k1 = k / 4;                // means d7 placed number appears k/4 times
	   long long int k2 = (k - 1) / 4;          // means d8 placed number appears k-1/4 times
	   long long int k3 = (k - 2) / 4;          // means d9 placed number appears k-2/4 times
	   long long int k4 = (k - 3) / 4;          // means d10 placed number appears k-3/4 times
	   
	   /* after that we have to create a number so we can check that it is multiple of 3 or not */
	   long long sum = d0 + d1 + d2 + d3*k1 + d4*k2 + d5*k3 + d6*k4;
	   
	   if(sum % 3 == 0) 
	    {
	        cout << "YES" << "\n";
	    }
	    else
	    {
	        cout << "NO" << "\n";
	    }
	}
	return 0;
}



