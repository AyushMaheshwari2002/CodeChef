/*  Link :   https://www.codechef.com/submit/SPEEDTEST

    Alice is driving from her home to her office which is A kilometers away and will take her X hours to reach.
    Bob is driving from his home to his office which is B kilometers away and will take him Y hours to reach.
    Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.
    
    Sample 1:
        Input :
              3
              20 6 20 5
              10 3 20 6
              9 1 1 1
        Output :
              Bob
              Equal
              Alice
        Explanation:
              Test case 1: Since Bob travels the distance between his office and house in 5 hours, whereas Alice travels the same distance of 20 kms in 6 hours, 
                           BOB is faster.
              Test case 2: Since Alice travels the distance of 10 km between her office and house in 3 hours and Bob travels a distance of 20 km in 6 hours, they 
                           have equal speeds.
              Test case 3: Since Alice travels the distance of 9 km between her office and house in 1 hour and Bob travels only a distance of 1 km in the same time, 
                           ALICE is faster.
*/



#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        float a, x, b, y;
        cin >> a >> x >> b >> y;
        
        float cmp1 = a/x;
        float cmp2 = b/y;
        
        if(cmp1 > cmp2)
        {
            cout << "Alice" << endl;
        }
        else if(cmp1 < cmp2)
        {
            cout << "Bob" << endl;
        }
        else if(cmp1 == cmp2)
        {
            cout << "Equal" << endl;
        }
    }
	return 0;
}



