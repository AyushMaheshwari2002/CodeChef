/*   Link :     https://www.codechef.com/START30C/problems/GFTSHP

    Chef wants to impress Chefina by giving her the maximum number of gifts possible.
    Chef is in a gift shop having N items where the cost of the ith item is equal to Ai. Chef has K amount of money and a 50% off discount coupon that he can use 
    for at most one of the items he buys.
    If the cost of an item is equal to X, then, after applying the coupon on that item, Chef only has to pay ⌈X2⌉ (rounded up to the nearest integer) amount 
    for that item.
    Help Chef find the maximum number of items he can buy with K amount of money and a 50% discount coupon given that he can use the coupon on at most one item.

              Sample Input 1 
              3
              1 4
              5
              3 15
              4 4 5
              3 10
              6 7 4
              Sample Output 1 
              1
              3
              2
              Explanation
              Test case 1: After applying the discount, Chef can buy the only available item at ⌈52⌉=3.
              Test case 2: Chef can buy all three items even without using the coupon.
              Test case 3: After applying coupon on the third item, Chef can buy the second and the third item at 7+⌈42⌉= 7+2=9.
              It is not possible for Chef to buy more than two items.
*/



#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        double k;
        cin >> n >> k;
        
        double arr[n] , sum = 0, count = 0;
        
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr , arr+n);
        
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            
            if(sum <= k)
                count++;
                
            else 
            {
                sum -= arr[i];
                arr[i] = arr[i] / 2;
                double discount = round(arr[i]);
                sum += discount;
                
                if(sum <= k)
                    count++;
                    break;
            }
        }
        cout << count << endl;
    }
	return 0;
}



