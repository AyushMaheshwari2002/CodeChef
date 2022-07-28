/*   Link :    https://www.codechef.com/LRNDSA02/problems/PSHOT

    Teams A and B are having a penalty shoot-out to decide the winner of their football match. Each team gets to take a shot N times, and the team with the higher
    number of scored goals at the end wins. If the number of goals scored during the shoot-out by each team turns out to be the same even after all 2N shots, then 
    they stop and agree that the result is a draw.

    The two teams take shots alternately — team A shoots first, then team B shoots, then team A and so on until team B takes its N-th shot (at which point each 
    team has taken exactly N shots). Even though all 2N shots are taken, the result of the shoot-out is often known earlier — e.g. if team A has already scored
    N-1 goals and team B has missed at least two shots, team A is definitely the winner.

    For each shot, you know whether it was a goal or a miss. You need to find the earliest moment when the winner is known — the smallest s (0 ≤ s ≤ 2N) such that
    after s shots, the result of the shoot-out (whether team A won, team B won or the match is drawn) would be known even if we did not know the results of the
    remaining 2N−s shots.

            Sample 1:
                    Input
                     T :  2
                     N :  3
                          101011
                     N :  3
                          100001

                    Output
                          4
                          6

    Explanation:
          Example case 1: After four shots, team A has scored 2 goals and team B has scored 0 goals. Whatever happens afterwards, team A is guaranteed to win, 
          since even if team B scored their last (and only) goal and team A did not score their last goal, team A would still win by 1 goal.

          Example case 2: Team A scores the first goal and after that, neither team scores any goals until the last shot. Up till then, there is always a possibility
          that the match could end in a draw if team B scored a goal with its last shot, or in the victory of team A if it was a miss. We can only guarantee the 
          result after the last shot.

*/



#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    
	    string s;
	    cin >> s;
	    
	    int score_A = 0, score_B = 0;
	    
	    int remainingMoves_A = N;
	    int remainingMoves_B = N;
	    
	    int winner = 2*N;               // takes it as a last index b'coz if DRAW case appears then it will return the last index
	    
	    for(int i = 0; i < 2 * N; i++)
	    {
	        // Team A's Turn
	        if(i % 2 == 0)
	        {
	            if(s[i] == '1')           // A's Goal
	            { 
	                score_A++;
	            }
	            remainingMoves_A--;
	        }
	        else         // Team B's Turn
	        {
	            if(s[i] == '1')           // A's Goal
	            { 
	                score_B++;
	            }
	            remainingMoves_B--;
	        }
	        
	        if(score_A > score_B + remainingMoves_B)
	        {
	            winner = i + 1;             // means here A will win which decide at index i+1
	            break;
	        }
	        
	        if(score_B > score_A + remainingMoves_A)
	        {
	            winner = i + 1;             // means here B will win which decide at index i+1
	            break;
	        }
	    }
	    
	    cout << winner << endl;
	}
	return 0;
}



