/*  Link :    https://www.codechef.com/LRNDSA01/problems/LADDU

    Let us know about various activities and amount of laddus you get corresponding to them.

    Contest Win (CodeChef’s Long, Cook-Off, LTIME, or any contest hosted with us) : 300 + Bonus (Bonus = 20 - contest rank). Note that if your rank is > 20, then 
    you won't get any bonus.
    Top Contributor on Discuss : 300
    Bug Finder : 50 - 1000 (depending on the bug severity). It may also fetch you a CodeChef internship!
    Contest Hosting : 50

    You can do a checkout for redeeming laddus once a month. The minimum laddus redeemable at Check Out are 200 for Indians and 400 for the rest of the world.
    You are given history of various activities of a user. The user has not redeemed any of the its laddus accrued.. Now the user just wants to redeem as less amount 
    of laddus he/she can, so that the laddus can last for as long as possible. Find out for how many maximum number of months he can redeem the laddus.

        Sample Input 1 
    T:  2
        4 INDIAN
        CONTEST_WON 1
        TOP_CONTRIBUTOR
        BUG_FOUND 100
        CONTEST_HOSTED
        4 NON_INDIAN
        CONTEST_WON 1
        TOP_CONTRIBUTOR
        BUG_FOUND 100
        CONTEST_HOSTED

        Sample Output 1 
        3
        1
       
        Explanation
        In the first example,
        For winning contest with rank 1, user gets 300 + 20 - 1 = 319 laddus.
        For top contributor, user gets 300 laddus.
        For finding a bug with severity of 100, user gets 100 laddus.
        For hosting a contest, user gets 50 laddus.
        So, overall user gets 319 + 300 + 100 + 50 = 769 laddus. Now, the user is an Indian user, he can redeem only 200 laddus per month. So, for first three months,
        he will redeem 200 * 3 = 600 laddus. The remaining 169 laddus, he can not redeem as he requires at least 200 laddues in a month to redeem. So, answer is 3.

        In the second example, user is a non-Indian user, he can redeem 400 laddues per month. So, in the first month, he will redeem 400 laddus. The remaining 369 laddus,
        he can not redeem as he requires at least 400 laddues in a month to redeem. So, answer is 1.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int N , laddu = 0;
        cin >> N;
        
        string S;
        cin >> S;
        
        while(N--)
        {
            string str;
            cin >> str;
            
            if(str == "CONTEST_WON")
            {
                int rank;
                cin >> rank;
                
                if(rank <= 20)
                {
                    laddu += 300 + 20 - rank;
                }  
                else 
                {
                    laddu += 300;
                } 
            }
            
            else if(str == "TOP_CONTRIBUTOR")
                laddu += 300;
            
            else if(str == "BUG_FOUND")
            {
                int servity;
                cin >> servity;
                
                laddu += servity;
            }
            else if(str == "CONTEST_HOSTED")
                laddu += 50;
        }
        
        if(S == "INDIAN")
        {
            cout << laddu / 200 << endl;
        }
        else if(S == "NON_INDIAN")
        {
            cout << laddu / 400 << endl;
        }
    }
	return 0;
}


