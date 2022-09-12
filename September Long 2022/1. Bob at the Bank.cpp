/*  Link :   https://www.codechef.com/submit/BOBBANK

    Bob has an account in the Bobby Bank. His current account balance is W rupees.
    Each month, the office in which Bob works deposits a fixed amount of X rupees to his account.
    Y rupees is deducted from Bob's account each month as bank charges.
    Find his final account balance after Z months. Note that the account balance can be negative as well.

    Sample 1:
          Input :
                  3
                  100 11 1 10
                  999 25 36 9
                  2500 100 125 101
          Output :
                  200
                  900
                  -25
          Explanation :
                Test case 1: Bob's current account balance is 100. At the end of each month Bob gets Rs 11 and pays Rs 1, thus gaining 10 per month. Thus, at the 
                             end of 10 months, Bob will have 100 + 10 × 10 = 200.
                Test case 2: Bob's current account balance is 999. At the end of each month Bob gets Rs 25 and pays Rs 36, thus losing 11 per month. Thus, at the end
                             of 9 months, Bob will have 999 − 11 × 9 = 900.
                Test case 3: Bob's current account balance is 2500. At the end of each month Bob gets Rs 100 and pays Rs 125, thus losing 25 per month. Thus, at the 
                             end of 101 months, Bob will have 2500 − 25 × 101 = −25.
*/



