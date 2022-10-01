//  Link :  https://www.codechef.com/submit/MAXEXP



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
	    
	    string s;
	    cin >> s;
	    
	    string str = "";
	    string sign = "";
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(s[i] != '+' && s[i] != '-') {
	            str += s[i];
	        }
	        
	        else {
	            sign += s[i];
	        }
	    }
	    
	    sort(str.begin(),str.end());
	    sort(sign.begin(),sign.end());
	    
	    string res = "";
	    long long idx = sign.size() - 1;
	    
	    for(int i = 0; i < str.size(); i++)
	    {
	        if(idx >= 0)
	        {
	            res += str[i];
	            res += sign[idx];
	            idx--;
	        }
	        else {
	            res += str[i];
	        }
	    }
	    
	    reverse(res.begin(),res.end());
	    
	    cout << res <<  endl;
	}
	return 0;
}



