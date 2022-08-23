/*  Link :    https://www.codechef.com/submit/TESTAVG

    Chef has scored A, B and C marks in 3 different subjects respectively.
    Chef will fail if the average score of any two subjects is less than 35. Determine whether Chef will pass or fail.
    
    Sample 1:
                Input :
                        4
                        23 47 52
                        28 36 80
                        0 100 0
                        35 35 35
                Output :
                        Pass
                        Fail
                        Fail
                        Pass
                        
               Explanation:
                        Test case 1: The average of the first two subjects is 35, the average of the first and last subject is 37.5, whereas the average of the last
                                     two subjects is 49.5. Since all averages are greater than or equal to 35, Chef will pass.
                        Test case 2: Since the average of the first two subjects is 32 which is less than 35, Chef will fail.
                        Test case 3: Since the average of the first and last subjects subjects is 0 which is less than 35, Chef will fail.
                        Test case 4: Since the average of any two subjects is 35 which is greater than or equal to 35, Chef will pass.
*/




