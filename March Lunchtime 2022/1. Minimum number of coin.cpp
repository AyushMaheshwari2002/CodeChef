/*  Link :    https://www.codechef.com/LTIME106C/problems/MINCOINS

    Chef has infinite coins in denominations of rupees 5 and rupees 10.
    Find the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print −1.

                Sample Input 1 
                3
                50
                15
                8
                Sample Output 1 
                5
                2
                -1
                Explanation
                Test Case 1: Chef would require at least 5 coins to pay 50 rupees. All these coins would be of rupees 10.
                Test Case 2: Chef would require at least 2 coins to pay 15 rupees. Out of these, 1 coin would be of rupees 10 and 1 coin would be of rupees 5.
                Test Case 3: Chef cannot pay exactly 8 rupees in denominations of rupees 5 and 10 only.
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
        
        if(x % 5 == 0)
        {
            int ans = x/10 + (x%10)/5;
            cout << ans << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
	return 0;
}



