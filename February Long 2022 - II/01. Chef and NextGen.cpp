/*   Link :   https://www.codechef.com/FEB222C/problems/HELIUM3

    Chef is currently working for a secret research group called NEXTGEN. While the rest of the world is still in search of a way to utilize Helium-3 as a fuel, 
    NEXTGEN scientists have been able to achieve 2 major milestones:

    1. Finding a way to make a nuclear reactor that will be able to utilize Helium-3 as a fuel
    2. Obtaining every bit of Helium-3 from the moon's surface
    Moving forward, the project requires some government funding for completion, which comes under one condition: to prove its worth, the project should power 
    Chefland by generating at least A units of power each year for the next B years.

    Help Chef determine whether the group will get funded assuming that the moon has X grams of Helium-3 and 1 gram of Helium-3 can provide Y units of power.

            Sample Input 1 
Testcases : 4
            1 2 3 4
            4 3 2 1
            2 18 9 4
            1 100 2 49
            Sample Output 1 
            Yes
            No
            Yes
            No
            Explanation :
            Test case 1: Chefland requires A=1 units of power for the next B=2 years. In total, the moon must be capable of providing A⋅B=2 units of power. 
            There are in total X=3 grams of Helium-3 on the moon which is capable of providing X*Y=12 units of power. 12>2, so the project satisfies the minimum 
            requirements for funding. Thus, the answer is Yes.

            Test case 2: The total amount of power needed by Chefland is A*B=12, whereas the total that can be provided by the Helium-3 present on the moon is X*Y=2, 
            which is insufficient to receive funding, so the answer is No.

            Test case 3: The total amount of power needed by Chefland is A*B=2*18=36, and the total that can be provided by the Helium-3 present on the moon is X*Y=9*4=36, 
            which is sufficient to receive funding, so the answer is Yes.

            Test case 4: The total amount of power needed by Chefland is A*B=1*100=100, and the total that can be provided by the Helium-3 present on the moon is X*Y=2*49=98,
            which is insufficient to receive funding, so the answer is No.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        
        if((X * Y) >= (A * B))
            cout << "YES" << endl;
            
        else
            cout << "NO" << endl;
    }
	return 0;
}


