/*   Link :   https://www.codechef.com/FEB222C/problems/WCC

    The World Chess Championship 2022 is about to start. 14 Classical games will be played between Chef and Carlsen in the championship, where each game has one of 
    three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 2 points, and the loser gets 0 points. If it’s a draw, both 
    players get 1 point each.
    The total prize pool of the championship is 100*X. At end of the 14 Classical games, if one player has strictly more points than the other, he is declared the 
    champion and gets 60*X as his prize money, and the loser gets 40*X.
    If the total points are tied, then the defending champion Carlsen is declared the winner. However, if this happens, the winner gets only 55*X, and the loser gets 45*X.
    Given the results of all the 14 games, output the prize money that Carlsen receives.
    The results are given as a string of length 14 consisting of the characters C, N, and D.

    1. C denotes a victory by Carlsen.
    2. N denotes a victory by Chef.
    3. D denotes a draw.

                Sample Input 1 
    Testcases : 4
                100
                CCCCCCCCCCCCCC
                400
                CDCDCDCDCDCDCD
                30
                DDCCNNDDDCCNND
                1
                NNDNNDDDNNDNDN

                Sample Output 1 
                6000
                24000
                1650
                40

                Explanation :
                Test case 1: Since Carlsen won all the games, he will be crowned the champion and will get 60*X as the prize money which is 60*100 = 6000
                Test case 2: Carlsen won 7 games and drew 7, so his score is 2*7+1*7 = 21. Chef lost 7 games and drew 7, so his score is 0*7+1*7 = 7. Since Carlsen has 
                more points, he will be crowned the champion and will get 60⋅X as the prize money which is 60*400 = 24000
                Test case 3: Carlsen and Chef both end up with 14 points. So, Carlsen is declared the winner, but because the points were tied, 
                he receives 55*X = 55*30 = 1650 in prize money.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int X;
        cin >> X;
        
        string s;
        cin >> s;
        
        int c_count = 0, n_count = 0, d_count = 0;
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'C')
                c_count++;
            else if(s[i] == 'N')
                n_count++;
            else
                d_count++;
        }
        if(c_count > n_count)                  //if Carlsen wins
            cout << 60 * X << endl;
        else if(c_count < n_count)             //if Carlsen lose
            cout << 40 * X << endl;
        else                                   //if draw
            cout << 55 * X << endl;
    }
	return 0;
}


