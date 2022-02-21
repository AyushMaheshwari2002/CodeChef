/*   Link :   https://www.codechef.com/COOK138C/problems/MAYOR_PARTY

    The mayor of your city has decided to throw a party to gather the favour of his people in different regions of the city.
    There are 3 distinct regions in the city namely A, B, C comprising of PA, PB and PC number of people respectively.
    However, the mayor knows that people of the region B are in conflict with people of regions A and C. So, there will be a conflict if people from region B are 
    present at the party along with people from region A or C.
    The mayor wants to invite as many people as possible and also avoid any conflicts. Help him invite maximum number of people to the party.

                    Sample Input 1 
                    3
                    2 3 4
                    1 5 2
                    8 8 8
                    Sample Output 1 
                    6
                    5
                    16
                    Explanation
                    Test case-1: Mayor can invite all the people from region A and C. So the maximum number of people invited is 6.
                    Test case-2: Mayor can invite all the people from region B. So the maximum number of people invited is 5.
*/



#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        
        if(A + C >= B)
            cout << A + C << endl;
            
        else
            cout << B << endl;
    }
	return 0;
}

