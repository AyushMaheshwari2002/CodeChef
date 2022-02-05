/*  Link :  https://www.codechef.com/LTIME104C/problems/SUBPERM

    A permutation of length N is an array of N integers P=[P1,P2,…,PN] such that every integer from 1 to N (inclusive) appears in it exactly once. 
    For example, [2,3,4,1] is a permutation of length 4.

    A subsegment of an array A[L…R]=[AL,AL+1,…,AR] is called good if the subsegment is a permutation of length (R−L+1). 
    For example, the array A=[2,3,1,4,2] contains 3 good subsegments: A[3…3]=[1], A[1…3] =[2,3,1], A[2…5]=[3,1,4,2].

    You are given two integers N and K. Find a permutation of length N such that it contains exactly K good subsegments. Print -1 if no such permutation exists.

                  Sample Input 1 
    Testcases :   4
                  1 1
                  3 2
                  4 1
                  5 3
                  Sample Output 1 
                  1
                  1 3 2 
                  -1
                  5 3 1 4 2
*/


#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int N, K;
        cin >> N >> K;
        
        if(N == 1)
            cout << "1";
            
        else if(K == 1)
            cout << "-1";
        else
        {
            for(int i = K; i <= N; i++)
                cout << i << " ";
                
            for(int i = 1; i < K; i++)
                cout << i << " ";
        }
         cout << endl;   
    }
	return 0;
}

