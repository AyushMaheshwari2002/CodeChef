/*   Link :   https://www.codechef.com/LTIME104C/problems/SUBSTADD

    Chef is asked to write a program that takes an array A of length N and two integers X,Y as input and modifies it as follows:

    1. Choose a random subset of elements of A (possibly empty)
    2. Increase all the elements of the chosen subset by X
    3. Increase the remaining elements in A by Y
    You are given N, X, Y, A and the array B that is returned by Chef's program. Determine whether Chef's program gave the correct output.

                  Sample Input 1 
    Testcases :   3
                  3 2 5
                  9 5 1
                  11 10 3
                  3 2 5
                  9 5 1
                  11 7 3
                  3 2 5
                  9 5 1
                  11 7 7

                  Sample Output 1 
                  Yes
                  Yes
                  No
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        
        int A[N], B[N];
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        
        for(int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        
        int cnt_x = 0, cnt_y = 0;
        
        for(int i = 0; i < N; i++)
        {
            if(abs(A[i] - B[i]) == X)
                cnt_x++;
                
            else if(abs(A[i] - B[i]) == Y)
                cnt_y++;
        }
        
        if(cnt_x == N || cnt_y == N || cnt_x + cnt_y == N)
            cout << "YES" << endl;
            
        else
            cout << "NO" << endl;
    }
	return 0;
}


