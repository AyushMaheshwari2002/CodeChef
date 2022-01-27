/*   Link :   https://www.codechef.com/problems/SUBARRAYXOR

    JJ is back with another challenge. He challenges you to construct an array A containing N integers such that the following conditions hold:

       1. For all 1 ≤ i ≤ N, 1 ≤ Ai ≤ 10^6
       2. Every subarray has non-zero XOR. That is, for every 1 ≤ L ≤ R ≤ N, AL ⊕ AL+1 ⊕ … ⊕ AR≠0. Here, ⊕ denotes the bitwise XOR operation.

    Can you complete JJ's challenge?
    Under the given constraints, it can be proved that there always exists at least one array satisfying these conditions.
*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cout << (i ^ (i-1)) << " ";
        }
        cout << endl;
    }
    return 0;
}

