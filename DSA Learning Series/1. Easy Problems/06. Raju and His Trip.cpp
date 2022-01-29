/*  Link :   https://www.codechef.com/CCSTART2/problems/VALTRI

  Raju is planning to visit his favourite restaurant. He shall travel to it by bus. Only the buses whose numbers are divisible by 5 or by 6 shall take him to his destination. 
  You are given a bus number N. Find if Raju can take the bus or not. Print YES if he can take the bus, otherwise print NO.
*/



#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    if(N % 5 == 0 || N % 6 == 0)
        cout << "YES";
        
    else
        cout << "NO";
	return 0;
}

