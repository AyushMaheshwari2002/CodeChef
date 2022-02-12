/*   Link :   https://www.codechef.com/FEB222C/problems/NOFIX

    Chef has a sequence of N integers A=[A1,A2,…,AN]. He can perform the following operation any number of times (possibly, zero):

    Choose any positive integer K and insert it at any position of the sequence (possibly the beginning or end of the sequence, or in between any two elements).
    For example, if A=[5,3,4] and Chef selects K=2, then after the operation he can obtain one of the sequences [2–,5,3,4],[5,2–,3,4],[5,3,2–,4], or [5,3,4,2–].

    Chef wants this sequence to satisfy the following condition: for each 1≤i≤∣A∣, Ai≠i. Here, ∣A∣ denotes the length of A.

    Help Chef to find the minimum number of operations that he has to perform to achieve this goal. It can be proved that under the constraints of the problem, 
    it's always possible to achieve this goal in a finite number of operations.

              Sample Input 1 
  Testcases : 3
              3
              2 4 5
              3
              4 1 3
              4
              3 2 4 2
              Sample Output 1 
              0
              1
              2
              Explanation
              Test case 1: The given sequence does not contain any index i such that Ai=i. Hence Chef does not have to perform any operation.

              Test case 2: In the given sequence, A3=3. Chef can choose K=2 and insert it before the first element, making the sequence A=[2–,4,1,3], which does not
              contain any index i for which Ai=i.

              Test case 3: In the given sequence, A2=2. Chef can perform the following sequence of operations:
              Choose K=5 and insert it before the first element. The sequence becomes A=[5–,3,2,4,2], and now A4=4.
              Choose K=3 and insert it between the third and fourth element. The sequence becomes A=[5,3,2,3–,4,2], which does not contain any index i for which Ai=i.
              It can be verified that there is no way to satisfy the given condition in less than two operations.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int N;
        cin >> N;
        
        int A[N];
        
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        
        int K = 0;
        for(int i = 0; i < N; i++)
        {
            int v = 1 + i + K;
            
            if(v == A[i])
            {
                K++;
            }
        }
        cout << K <<endl;
    }
	return 0;
}


