/* Link :  https://www.codechef.com/CCSTART2/problems/DIFACTRS

   You are given a number N and find all the distinct factors of N.
   
            Sample Input :
            4
            Sample Output :
            3
            1 2 4
            Sample Input :
            6
            Sample Output :
            4
            1 2 3 6

            EXPLANATION:
            In the first example, all factors of 4 are 1, 2, 4.
            In the second example, all factors of 6 are 1, 2, 3, 6.
*/


#include <iostream>
#include<vector>
using namespace std;

int main() 
{	
    int N;
    cin >> N;
    
    int count = 0;
    vector<int> v;
    
    for(int i = 1; i <= N; i++)
    {
        if(N % i == 0)
        {
            count++;
            v.push_back(i);
        }
    }
    cout << count << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
	return 0;
}

