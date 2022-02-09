/*   Link :   https://www.codechef.com/CCSTART2/problems/SQALPAT

    You're given a number N. Print the first N lines of the below-given pattern.

    1 2 3 4 5
    10 9 8 7 6
    11 12 13 14 15
    20 19 18 17 16
    21 22 23 24 25
    30 29 28 27 26

                    Sample Input 1:
                    4
                    Sample Output 1:
                    1 2 3 4 5
                    10 9 8 7 6
                    11 12 13 14 15
                    20 19 18 17 16
                    Sample Input 2:
                    2
                    Sample Output 2:
                    1 2 3 4 5
                    10 9 8 7 6
                    EXPLANATION:
                    In the first example, we'll print the first 4 lines of the given pattern.
                    In the second example, we'll print the first 2 lines of the given pattern.
*/


#include <iostream>
using namespace std;

int main()
{
    int N, k = -4;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            k += 4;
            for (int j = 1; j <= 5; j++)
            {
                cout << ++k << " ";                    
            }
            cout << endl;
        }
        else
        {
            k += 6;
            for (int j = 1; j <= 5; j++)
            {
                cout << --k << " ";
            }
            cout << endl;
        }
    }
    return 0;
}


