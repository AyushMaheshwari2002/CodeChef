/*  Link :    https://www.codechef.com/submit/CREDS

    In the current semester, you have taken X RTP courses, Y Audit courses and Z Non-RTP courses.
    The credit distribution for the courses are:
           * 4 credits for clearing each RTP course.
           * 2 credits for clearing each Audit course.
           * No credits for clearing a Non-RTP course.
    Assuming that you cleared all your courses, report the number of credits you obtain this semester.
    
    Sample 1:
          Input :
              4
              6 6 5
              8 7 2
              9 3 8
              9 2 4
          Output :
              36
              46
              42
              40
Explanation :
  Test case 1: You obtain 4 credits for each of the RTP courses, accounting for 4⋅6 = 24 credits. You also obtain 2 credits for each audit course, accounting for 2⋅6 = 12 
  credits. Finally, you get 0 credits for each of the non-RTP courses, accounting for 0⋅5 = 0 credits. This accounts for a total of 24 + 12 + 0 = 36 credits.

  Test case 2: You obtain 4 credits for each of the RTP courses, accounting for 4⋅8 = 32 credits. You also obtain 2 credits for each audit course, accounting for 2⋅7 = 14
  credits. Finally, you get 0 credits for each of the non-RTP courses, accounting for 0⋅2 = 0 credits. This accounts for a total of 32 + 14 + 0 = 46 credits.

  Test case 3: You obtain 4 credits for each of the RTP courses, accounting for 4⋅9 = 36 credits. You also obtain 2 credits for each audit course, accounting for 2⋅3 = 6
  credits. Finally, you get 0 credits for each of the non-RTP courses, accounting for 0⋅8 = 0 credits. This accounts for a total of 36 + 6 + 0 = 42 credits.

  Test case 4: You obtain 4 credits for each of the RTP courses, accounting for 4⋅9 = 36 credits. You also obtain 2 credits for each audit course, accounting for 2⋅2 = 4
  credits. Finally, you get 0 credits for each of the non-RTP courses, accounting for 0⋅4 = 0 credits. This accounts for a total of 36 + 4 + 0 = 40 credits.
*/



#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        
        int ans = x*4 + y*2;
        
        cout << ans << endl;
    }
	return 0;
}




