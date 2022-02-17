/*   Link :   https://www.codechef.com/LRNDSA01/problems/CARVANS

    Most problems on CodeChef highlight chef's love for food and cooking but little is known about his love for racing sports. He is an avid Formula 1 fan. He went 
    to watch this year's Indian Grand Prix at New Delhi. He noticed that one segment of the circuit was a long straight road. It was impossible for a car to overtake 
    other cars on this segment. Therefore, a car had to lower down its speed if there was a slower car in front of it. While watching the race, Chef started to wonder 
    how many cars were moving at their maximum speed.

    Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the circuit. Each car prefers to move at its maximum speed. 
    If that's not possible because of the front car being slow, it might have to lower its speed. It still moves at the fastest possible speed while avoiding any collisions.
    For the purpose of this problem, you can assume that the straight segment is infinitely long.

    Count the number of cars which were moving at their maximum speed on the straight segment.

                        Example
                        Input:
                        3
                        1
                        10
                        3
                        8 3 6
                        5
                        4 5 1 2 3

                        Output:
                        1
                        2
                        2
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
        cin >> n;
        
        int arr[n];
        for(int i = 0; i < n; i++)
        {
              cin >> arr[i];
        }
        
        int min = arr[0];
        int count = 1;
        
        for(int i = 1; i < n; i++)
        {
              if(min >= arr[i])
              {
                    count++;
                    min = arr[i];
              }
        }
        cout << count << endl;
    }
	return 0;
}


