/*  Link :   https://www.codechef.com/LRNDSA01/problems/ZCO14003

    You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your declared price 
    if and only if the price is less than or equal to the customer's budget.

    You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.

    For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60 .

                            Sample Input 1
                            4
                            30
                            20
                            53
                            14

                            Sample Output 1
                            60

                            Sample Input 2
                            5
                            40
                            3
                            65
                            33
                            21

                            Sample Output 2
                            99
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long N;
    cin >> N;
    
    vector<long long> v(N);
    for(int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin() , v.end());
    
    long long max = 0;
    for(int i = 0; i < N; i++)
    {
        long long ans = v[i] * (N - i);
        
        if(ans > max)
            max = ans;
    }
    cout << max << endl;
	return 0;
}


