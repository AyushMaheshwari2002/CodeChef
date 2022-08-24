/*  Link :     https://www.codechef.com/submit/EQLZING

    Chef has two integers A and B. In one operation he can choose any integer d, and make one of the following two moves :
             * Add d to A and subtract d from B.
             * Add d to B and subtract d from A.
    Chef is allowed to make as many operations as he wants. Can he make A and B equal?
    
    Sample 1:
            Input:
                  2
                  3 3
                  1 2
            Output :
                  Yes
                  No
            Explanation:
                  Test case 1: Since A and B are already equal, Chef does not need any operations.
                  Test case 2: It can be shown that A and B can never be made equal using any number of given operations.
*/




#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int a, b, d;
	    cin >> a >> b;
	    
	    if(abs(a - b) % 2 == 0)
	    {
	        cout << "Yes" << endl;
	    }
	    else
	    {
	        cout << "No" << endl;
	    }
	}
	return 0;
}




