/*  Link :   https://www.codechef.com/LTIME106C/problems/SPLITPAIR

    You are given a positive integer N. You have to split each digit of N into either of two non-empty subsequences A or B.
    For example, if N=104, some possible values of (A,B) can be (10,4),(14,0) and (1,4). Note that, after separating the digits into A and B, these subsequences 
    are considered as positive integers and thus leading zeros can be omitted.
    Let us define a function F(X,Y)=(X+Y)%2. Find out whether it is possible to find two non-empty subsequences A and B formed out of N such that F(A,B)=0.

                Sample Input 1 
                2
                10
                73452
                Sample Output 1 
                NO
                YES
                Explanation
                Test Case 1: The only two possibilities are:
                A=0,B=1: Here F(A,B)=(A+B)%2=(0+1)%2=1%2=1.
                A=1,B=0: Here F(A,B)=(A+B)%2=(1+0)%2=1%2=1. Hence it's not possible to achieve F(A,B)=0.

                Test Case 2: One of the possible ways to split the digits of N such that F(A,B)=0 is:
                A=74,B=352: Here F(A,B)=(A+B)%2=(74+352)%2=426%2=0.
*/



#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
        int i = 0; 
        string str; 
        cin >> str; 
        int even = 0, odd = 0; 
        
        while(str[i]) 
        {  
            if((str[i]-'0') % 2==0)
                even++;        
            else 
                odd++;         
            i++; 
        } 
        if(((str[str.size()-1])-'0')&1) 
        { 
            if(odd >= 2) 
                cout << "YES"<<endl;      
            else
                cout << "NO"<<endl; 
        } 
        else
        { 
            if(even >= 2) 
                cout << "YES"<<endl; 
            else 
                cout << "NO"<<endl; 
        }
	}
	return 0;
}



