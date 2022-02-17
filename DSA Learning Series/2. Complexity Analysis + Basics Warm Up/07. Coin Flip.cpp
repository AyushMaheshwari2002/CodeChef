/*  Link :   https://www.codechef.com/LRNDSA01/problems/CONFLIP

    Input:
    The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow.

    The first line of each test contains an integer G, denoting the number of games played by Elephant. Each of the following G lines denotes a single game, and 
    contains 3 space-separated integers I, N, Q, where I denotes the initial state of the coins, N denotes the number of coins and rounds, and Q, which is either 
    1, or 2 as explained below.

    Here I=1 means all coins are showing Head in the start of the game, and I=2 means all coins are showing Tail in the start of the game. Q=1 means Elephant needs to 
    guess the total number of coins showing Head in the end of the game, and Q=2 means Elephant needs to guess the total number of coins showing Tail in the end of the game.

            Sample Input:
            1
            2
            1 5 1
            1 5 2
            Sample Output:
            2
            3
            Explanation:
            In the 1st game in Example, I=1, so initial arrangement of coins are H H H H H, and now Elephant will play 5 rounds and coin faces will be changed as follows :-
            After the 1st Round: T H H H H After the 2nd Round: H T H H H After the 3rd Round: T H T H H After the 4th Round: H T H T H 
            After the 5th Round: T H T H T Finally Q=1, so we need to find the total number of coins showing Head, which is 2

            In the 2nd game in Example: This is similar to the 1st game, except Elephant needs to find the total number of coins showing Tail. 
            So the Answer is 3. (Please see the final state of the coins in the 1st game)
*/


#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int G;                     // G = number of games played by Elephant
        cin >> G;
        
        while(G--)
        {
            int I, N, Q;              
            cin >> I >> N >> Q;
            
            // if initial state of the coins == total number of coins showing Head or Tail
            // if the number of coins(N) is EVEN 
            if(I == Q)      
                cout << N / 2 << endl;
            else                                 // if N is ODD
                cout << N - (N / 2) << endl;
        }
    }
	return 0;
}


