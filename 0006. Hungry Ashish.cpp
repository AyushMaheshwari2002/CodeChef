/*   Link :   https://www.codechef.com/COOK137C/problems/PIZZA_BURGER

    It's dinner time. Ashish is very hungry and wants to eat something. He has X rupees in his pocket. Since Ashish is very picky, he only likes to eat 
    either PIZZA or BURGER. In addition, he prefers eating PIZZA over eating BURGER. The cost of a PIZZA is Y rupees while the cost of a BURGER is Z rupees.
    Ashish can eat at most one thing. Find out what will Ashish eat for his dinner.

                  Sample Input : 
    Testcases :   3
                  50 40 60                       (X, Y, Z)
                  40 55 39
                  30 42 37

                  Sample Output : 
                  PIZZA
                  BURGER
                  NOTHING
*/



#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int x, y, z;
	    cin >> x >> y >> z;
	    
	    if((x >= y && x >= z) || (x >= y && x <= z))
	        cout << "PIZZA" << endl;
	        
	    else if(x < y  && x >= z)
	        cout << "BURGER" << endl;
	        
	    else                                         //if(x < y && x < z)
	        cout<< "NOTHING" << endl;
	}
	return 0;
}

