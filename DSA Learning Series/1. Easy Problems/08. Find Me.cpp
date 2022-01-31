/*   Link :   https://www.codechef.com/CCSTART2/problems/FINDMELI

    You are given a list of N integers and a value K. Print 1 if K exists in the given list of N integers, otherwise print −1.

                Sample Input 1:
                4 2                         (N , K)
                1 2 3 4

                Sample Output 1:
                1

                Sample Input 2:
                4 4
                1 2 6 9

                Sample Output 2:
                -1

                EXPLANATION:
                1. In the first example, as 2 is present in the list.
                2. In the second example, 4 is not present in the list.
*/


#include <iostream>
using namespace std;

int main() 
{
    int N, K;
    cin >> N >> K;
    
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] == K)
        {
            count++;
        }
        else
            continue;
    }
    if(count >= 1)
        cout << "1" <<endl;
    else
        cout << "-1" <<endl;
    
	return 0;
}


