//  Link :   https://www.codechef.com/submit/TWODIFFPALIN



#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    long long a , b;
	    cin >> a >> b;
	    
	    if(a % 2 == 1 && b % 2 == 1)  
	    { 
	        cout << "NO" << endl;
	    }
	    
	    else if(a == 1 || b == 1) {
	        cout << "NO" << endl;
	    }
	    else { 
	        cout << "YES" << endl;
	    }
	}
	return 0;
}



