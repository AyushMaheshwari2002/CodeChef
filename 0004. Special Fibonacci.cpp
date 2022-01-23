/*    Link :   https://www.codechef.com/problems/FIBXOR01
    
    Sankalp recently learned Fibonacci numbers and now he is studying different algorithms to find them. After getting bored of reading them,
    he came with hisown new type of numbers. He defined them as follows:

     f(0) = a;
     f(1) = b;
     f(n) = f(n-1) ^ f(n-2);  when n>1, where ^ denotes the bitwise xor operation.
    You are given three integers a,b and n , calculate f(n). 
                  
                  Sample Input :
    Testcases(t): 4
                  86 77 15            (a , b , n)
                  93 35 86
                  92 49 21
                  62 27 90

                  Sample Output :
                  86
                  126
                  92
                  62
*/


#include <iostream>
using namespace std;

int main() 
{
  int t;
	cin>>t;
	
	while(t--)
	{
	    int a, b, n;
	    cin >> a >> b >> n;
	    
	    if(n % 3 == 0)
	        cout << a << endl;
	    
	    else if(n % 3 == 1)
	        cout << b << endl;
	    
	    else 
	        cout << (a ^ b) << endl;
	}
	return 0;
}
