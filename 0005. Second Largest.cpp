/*   Link :   https://www.codechef.com/problems/FLOW017

     Three numbers A, B and C are the inputs. Write a program to find second largest among them.

              Input :
   Testcase : 3 
              120 11 400
              10213 312 10
              10 3 450

              Output :
              120
              312
              10
*/


#include <iostream>
using namespace std;

int main() 
{
    int t;
	cin>>t;
	
	while(t--)
	{
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if(((a > b) && (a < c)) || ((a > c) && (a < b)))
		{
		    cout << a << endl;
		}
		else if(((b > a) && (b < c)) || ((b > c) && (b < a)))
		{
		    cout << b << endl;
		}
		else
		{
		    cout << c << endl;
		}
	}
	return 0;
}
