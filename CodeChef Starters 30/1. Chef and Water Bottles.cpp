/*    Link :    https://www.codechef.com/START30C/problems/CHEFBOTTLE

    Chef has N empty bottles where each bottle has a capacity of X litres.
    There is a water tank in Chefland having K litres of water. Chef wants to fill the empty bottles using the water in the tank.
    Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely.

            Sample Input 1 
            3
            5 2 8
            10 5 4
            3 1 4
            Sample Output 1 
            4
            0
            3
            Explanation
            Test Case 1: The amount of water in the tank is 8 litres. The capacity of each bottle is 2 litres. Hence, 4 water bottles can be filled completely.
            Test Case 2: The amount of water in the tank is 4 litres. The capacity of each bottle is 5 litres. Hence, no water bottle can be filled completely.
            Test Case 3: The amount of water in the tank is 4 litres. The capacity of each bottle is 1 litre. Chef has 3 bottles available. He can fill all these 
            bottles completely using 3 litres of water.
*/



#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n , x , k;
        cin >> n >> x >> k;
        
        int bottles = k / x;
        
        if(n >= bottles)
            cout << bottles << endl;
        else
            cout << n << endl;
    }
	return 0;
}



