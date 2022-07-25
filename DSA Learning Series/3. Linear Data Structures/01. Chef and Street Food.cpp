/*  Link :    https://www.codechef.com/LRNDSA02/problems/STFOOD

    In Chefland, there is a very famous street where NN types of street food (numbered 1 through N) are offered. For each valid i, there are Si stores that offer 
    food of the i-th type, the price of one piece of food of this type is Vi(the same in each of these stores) and each day, Pi people come to buy it; each of these
    people wants to buy one piece of food of the i-th type.

    Chef is planning to open a new store at this street, where he would offer food of one of these N types. Chef assumes that the people who want to buy the type of
    food he'd offer will split equally among all stores that offer it, and if this is impossible, i.e. the number of these people p is not divisible by the number of
    these stores s, then only floor(p/s) people will buy food from Chef.

    Chef wants to maximise his daily profit. Help Chef choose which type of food to offer and find the maximum daily profit he can make.
    
            Sample 1:
                    Input
                         T :  2
                         N :  3
                              4 6 8
                              2 6 6
                              1 4 3
                         N :  1
                              7 7 4
                    
                    Output
                              12
                              0
                    
      Explanation:
          Example case 1: Chef should offer food of the second type. On each day, two people would buy from him, so his daily profit would be 12.
          Example case 2: Chef has no option other than to offer the only type of food, but he does not expect anyone to buy from him anyway, so his daily profit is 0.
*/



#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int N;
        cin >> N;
        
        /* s = number of stores in street
           p = number of peoples
           v = price of one item of food */
        int s, p, v, maxProfit = 0;            
        
        while(N-- > 0)
        {
            cin >> s >> p >> v;
            
            // here we do (s+1) b,coz if chef opens a store so there is a increase in number of stores in street
            maxProfit = max(maxProfit , (p / (s + 1)) * v);
        }
        cout << maxProfit << endl;
    }
	return 0;
}



