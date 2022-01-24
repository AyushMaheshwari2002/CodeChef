/*   Link :    https://www.codechef.com/COOK137C/problems/MASKPOL

     A city has been infected by a contagious virus.
     In a survey, it was found that A out of the N people living in the city are currently infected. It has been observed that the only way for a person to 
     get infected is if he comes in contact with an already infected person, and both of them are NOT wearing a mask.

     The mayor of the city wants to make a new Mask Policy and find out the minimum number of people that will be required to wear a mask to avoid the further 
     spread of the virus. Help the mayor in finding this number.

     Note: The only aim of the mayor is to stop virus spread, not to mask every infected person.

                    Sample Input : 
     Testcases :    3
                    2 1
                    3 2
                    3 1

                    Sample Output :
                    1
                    1
                    1
*/



#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int N, A;
	    cin >> N >> A;                      // N = Total no. of people , A = infected people
	    
	    int uninfected = N - A;
	    
	    if(N == A || A == 0)                 //if all people are infected or if no one is infected
	        cout << "0" << endl;
	        
	    if(uninfected >= A)
	        cout <<  A << endl;
	        
	    if(A > uninfected)
	        cout << uninfected << endl;
	}
	return 0;
}

