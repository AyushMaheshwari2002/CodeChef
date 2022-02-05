/*   Link :  https://www.codechef.com/LTIME104C/problems/LOCKDRAW

     Bob and Alice are having a lockout match between them. There are three problems in the contest worth A, B, and C points respectively. Only the first player 
     to solve a problem gets points for that problem. It is impossible for Bob and Alice to solve a problem at the same time. Chef wants to know if there is any 
     chance of a draw if Bob and Alice manage to solve all 3 problems. A draw occurs when both players end with equal number of points.

                      Sample Input 
     Testcases :      3
                      2 5 2
                      4 2 2
                      3 5 5

                      Sample Output  
                      NO
                      YES
                      NO
*/


#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        
        if(A + B == C)
        cout << "YES" <<endl;
        
        else if(B + C == A)
        cout << "YES" <<endl;
        
        else if(A + C == B)
        cout << "YES" <<endl;
        
        else
            cout << "NO" <<endl;
    }
	return 0;
}


