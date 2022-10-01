//  Link :   https://www.codechef.com/submit/NONNEGPROD?tab=statement


#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int negative = 0;
	    bool flag = false;
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] < 0) { 
	            negative++;
	        }
	        
	        if(arr[i] == 0) {
	            flag = true;
	            break;
	        }
	    }
	    
	    if(flag) {
	        cout << 0 << endl;
	    }
	    
	    else if(negative % 2 == 0) {
	        cout << 0 << endl;
	    }
	       
	   else {
	       cout << 1 << endl;
	   }
	}
	return 0;
}



