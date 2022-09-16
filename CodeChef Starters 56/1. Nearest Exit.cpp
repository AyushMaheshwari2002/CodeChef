/*  Link :    https://www.codechef.com/submit/NEARESTEXIT

    There are two exits in a bus with 100 seats:
          * First exit is located beside seat number 1.
          * Second exit is located beside seat number 100.
    Seats are arranged in a straight line from 1 to 100 with equal spacing between any 2 adjacent seats.
    A passenger prefers to choose the nearest exit while leaving the bus.
    Determine the exit taken by passenger sitting on seat X.
    
    Sample 1:
          Input :
                  6
                  1
                  50
                  100
                  30
                  51
                  73
        Output :
                  LEFT
                  LEFT
                  RIGHT
                  LEFT
                  RIGHT
                  RIGHT
        Explanation:
                  Test case 1: The exit is located beside seat 1. Hence, the passenger can take this exit without moving to any other seat.
                  Test case 2: To take exit at seat 1, the passenger needs to move 49 seats. However, to take the exit at seat 100, the passenger needs to move 50 
                               seats. Thus, exit at seat 1 is closer.
                  Test case 3: The exit is located beside seat 100. Hence, the passenger can take this exit without moving to any other seat.
                  Test case 4: To take exit at seat 1, the passenger needs to move 29 seats. However, to take the exit at seat 100, the passenger needs to move 70 
                               seats. Thus, exit at seat 1 is closer.
*/



#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int x;
	    cin >> x;
	    
	    if(x <= 50)
	    {
	        cout << "LEFT" << endl;
	    }
	    else {
	        cout << "RIGHT" << endl;
	    }
	}
	return 0;
}



