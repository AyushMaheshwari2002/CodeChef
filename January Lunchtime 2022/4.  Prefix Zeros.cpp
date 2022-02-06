/*   Link :   https://www.codechef.com/LTIME104C/problems/PREZ

    You are given a string S of length N, which consists of digits from 0 to 9. You can apply the following operation to the string:

    Choose an integer L with 1 ≤ L ≤ N and apply Si=(Si+1)mod10 for each 1 ≤ i ≤ L.
    For example, if S=39590, then choosing L=3 and applying the operation yields the string S=406––––90.

    The prefix of string S of length l(1 ≤ l ≤ ∣S∣) is string S1 S2 … Sl. A prefix of length l is called good if S1=0, S2=0,…, Sl = 0. Find the length of the longest good 
    prefix that can be obtained in string S by applying the given operation maximum K times.

*/


#include<bits/stdc++.h>
using namespace std;

int cal(int mid , string S)
{
    int add = 0;
    for(int i = mid; i >= 0; i--)
    {
        int v = (int(S[i]) - int('0') + add) % 10;
        if(v == 0)
            continue;
        add += 10 - v;
    }
    return add;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int N, K;
        cin >> N >> K;
        
        string S;
        cin >> S;
        
        int low = 0, high = N-1, ans = 0;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(cal(mid, S) > K)
            {
                high = mid - 1;
            }
            else {
                ans = mid + 1;
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}


