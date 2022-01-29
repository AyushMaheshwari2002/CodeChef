/*  Link :   https://www.codechef.com/CCSTART2/problems/BUYPLSE

    Chef went to a shop and buys a pens and b pencils. Each pen costs x units and each pencil costs y units. Now find what is the total amount Chef will spend to 
    buy a pens and b pencils.
*/


#include <bits/stdc++.h>
using namespace std;

int main() 
{	
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    
    int cost = ((a * x) + (b * y));
    cout << cost << endl;
	return 0;
}

