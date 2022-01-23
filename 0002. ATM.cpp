/*  Link :  https://www.codechef.com/problems/HS08TEST

    Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance 
    has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate 
    Pooja's account balance after an attempted transaction.
    
        Example 1 - Successful Transaction
              Input:
              30 120.00          (30 = Wihtdwawl Amount , 120.00 = Total Balance)
              Output:
              89.50

        Example 2 - Incorrect Withdrawal Amount (not multiple of 5)
              Input:
              42 120.00          (42 = Wihtdwawl Amount , 120.00 = Total Balance)
              Output:
              120.00

        Example 3 - Insufficient Funds
              Input:
              300 120.00         (300 = Wihtdwawl Amount , 120.00 = Total Balance)
              Output:
              120.00
*/


#include <iostream>
using namespace std;

int main() 
{
    int withdrawl_amt;
    float total_amt;
    
    cin >> withdrawl_amt;
    cin >> total_amt;
    
    if((withdrawl_amt % 5 == 0) && (total_amt >= (withdrawl_amt + 0.50)))
    {
        cout << (total_amt - withdrawl_amt - 0.5);
    }
    else 
    {
        cout << total_amt;
    }
	return 0;
}
