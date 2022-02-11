/*   Link :    https://www.codechef.com/LRNDSA01/problems/LAPIN

    Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there 
    are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two 
    halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. 
    The two halves contain the same characters but their frequencies do not match.
    Your task is simple. Given a string, you need to tell if it is a lapindrome.

                        Example:
                        Input:
         Testcases :    6
                        gaga
                        abcde
                        rotor
                        xyzxy
                        abbaab
                        ababc


                        Output:
                        YES
                        NO
                        YES
                        YES
                        NO
                        NO
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        
        string left , right;
        
        int n = s.length();
        
        for(int i = 0; i < n/2; i++)
        {
            left += s[i];
            right += s[n - i - 1];
        }
        
        sort(left.begin() , left.end());
        sort(right.begin() , right.end());
        
        if(left == right)
        {
            cout << "YES" <<endl;
        }
        else 
        {   
            cout << "NO" << endl;
        }
    }
	return 0;
}


