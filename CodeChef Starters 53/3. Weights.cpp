/*  Link :   https://www.codechef.com/submit/WGHTS

    Chef is playing with weights. He has an object weighing W units. He also has three weights each of X, Y, and Z units respectively. Help him determine whether he 
    can measure the exact weight of the object with one or more of these weights.
    If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.
    
    Sample 1:
           Input : 
                4
                5 2 1 6
                7 9 7 2
                20 8 10 12
                20 10 11 12
           
           Output :
                NO
                YES
                YES
                NO
                
            Explanation:
                Test Case 1: It is not possible to measure 5 units using any combination of given weights.
                Test Case 2: Chef can use the second weight of 7 units to measure the object exactly.
                Test Case 3: Chef can use combination of first and third weights to measure 8 + 12 = 20 units.
                Test Case 4: Chef cannot measure 20 units of weight using any combination of given weights.
*/




#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int w, x, y, z;
	    cin >> w >> x >> y >> z;
	    
	    if(x == w || y == w || z == w)
	    {
	        cout << "Yes" << endl;
	    }
	    else if((x+y) == w || (y+z) == w || (z+x) == w || (x+y+z) == w)
	    {
	        cout << "Yes" << endl;
	    }
	    else {
	        cout << "No" << endl;
	    }
	}
	return 0;
}




