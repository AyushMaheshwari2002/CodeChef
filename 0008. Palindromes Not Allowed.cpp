/*     Link :   https://www.codechef.com/COOK137C/problems/NOPAL

    It is JJ's birthday and you decide to gift him a string S (consisting of English alphabet only) of length N. But you also know that JJ does not like 
    palindromes so you decide that none of the substrings of S of length ≥2 should be a palindrome.

    Can you find any suitable string which can be gifted to JJ?
    Recall that a string is called palindrome if it reads the same backwards and forwards, for e.g. noon and level are palindromic strings.
    
                      Sample Input :
      Testcases :     3
                      2
                      2
                      4
                      Sample Output : 
                      gl
                      hf
                      waow
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
	    
	    string S = "";
	    char curr = 'a';
	    
	    for(int i = 0; i < N; i++)
	    {
	        S += curr;
	        curr++;
	       
	        if(curr == 'd')
	            curr = 'a';
	    }
	    cout << S << endl;
	}
	return 0;
}

