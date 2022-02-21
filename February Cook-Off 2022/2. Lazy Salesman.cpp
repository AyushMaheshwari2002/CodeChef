/*  Link :   https://www.codechef.com/COOK138C/problems/HOLIDAYS

    Ved is a salesman. He needs to earn at least W rupees in N days for his livelihood. However, on a given day i (1≤i≤N), he can only earn Ai rupees by working on that day.
    Ved, being a lazy salesman, wants to take as many holidays as possible. It is known that on a holiday, Ved does not work and thus does not earn anything. Help maximize 
    the number of days on which Ved can take a holiday.
    It is guaranteed that Ved can always earn at least W rupees by working on all days.

                      Sample Input 1 
                      3
                      5 10
                      3 2 6 1 3
                      4 15
                      3 2 4 6
                      6 8
                      9 12 6 5 2 2
                      Sample Output 1 
                      2
                      0
                      5
                      Explanation
                      Test case-1: Ved can work on 2-nd, 3-rd and 5-th day earning 2+6+3=11 rupees ≥W rupees. Thus he can take 2 holidays on the 1-st and the 4-th day.
                      Test case-2: Ved has to work on all days to earn ≥W rupees. Thus he can not take any holidays.
                      Test case-3: Ved can work on 2-nd day earning 12 rupees ≥W rupees. Thus he can take holiday on the remaining days.
*/



#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int N , W;
        cin >> N >> W;
        
        int arr[N];
        for(int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr , arr+N);
        reverse(arr , arr+N);
        
        int sum = 0, count = 0;
        for(int i = 0; i < N; i++)
        {
            sum += arr[i];
            count++;
            if(sum >= W)
            {
                count = N - count;
                break;
            }
        }
        cout << count << endl;
    }
	return 0;
}


