/*  Link :    https://www.codechef.com/submit/PERMCLEAR

    Alice has an array A of length N which is initially a permutation. She dislikes K numbers which are B1, B2,..., BK all of which are distinct. Therefore, she removes
    all the occurrences of these numbers from A. The order of the remaining elements of the A does not change.
    Can you find out the resulting array A?
    Note: A permutation of length N is an array where every integer from 1 to N occurs exactly once.
    
    Sample 1:
          Input :
                3
                4
                4 1 3 2
                2
                3 1
                9
                5 2 9 1 8 6 4 3 7
                3
                5 8 9
                5
                3 4 5 1 2
                2
                2 3
         Output :
                4 2
                2 1 6 4 3 7
                4 5 1
        Explanation:
                Test Case 1: Here A = [4, 1, 3, 2] and B = [3, 1]. The resulting array A after removing all the numbers which Alice dislikes is [4, 2].
                             Note that here [2, 4] is an incorrect answer since the order of elements should be the same as in the original array.
                Test Case 2: Here A = [5, 2, 9, 1, 8, 6, 4, 3, 7] and B = [5, 8, 9]. The resulting array A after removing all the numbers which Alice dislikes 
                             is [2, 1, 6, 4, 3, 7].
                Test Case 3: Here A = [3, 4, 5, 1, 2] and B = [2, 3]. The resulting array A after removing all the numbers which Alice dislikes is [4, 5, 1].
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
        
        vector<long long> v;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        long long k;
        set<long long> s;
        for(int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        
        for(int i = 0; i < n; i++)
        {
            if(s.count(v[i]))
            {
                continue;
            }
            else {
                cout << v[i] << "  ";
            }
        }
        
        cout << endl;
    }
	return 0;
}



