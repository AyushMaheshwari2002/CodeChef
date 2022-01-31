/*  Link :  https://www.codechef.com/CCSTART2/problems/REVSTRPT

   You're given a number N. Print the first N lines of the below-given pattern.

        *
       **
      ***
     ****
    *****
*/


#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(j > N-i)
    	        cout <<"*";
            else 
    	        cout<<" ";
        }
        cout <<"\n";
    }
}

