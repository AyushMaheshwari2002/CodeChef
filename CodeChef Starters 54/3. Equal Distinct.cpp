/*  Link :    https://www.codechef.com/submit/EQDIS

    Let F(S) denote the number of distinct elements in the array S. For example, F([1, 2, 3, 2]) = 3, F([1, 2]) = 2.
    You are given an array A containing N integers. Find if it is possible to divide the elements of the array A into two arrays B and C such that :
             * Every element of the array A belongs either to array B or to array C.
             * F(B) = F(C).
    
    Sample 1:
        Input :
            3
            2
            1 2
            3
            1 2 3
            4
            3 1 1 2
      Output :
            YES
            NO
            YES
      Explanation:
            Test case 1: One possible division is B = [1], C = [2]. Here F(B) = F(C) = 1.
            Test case 2: There is no way to distribute the elements of the array A = [1, 2, 3] satisfying all the conditions.
            Test case 3: One possible division is B = [3, 1], C = [1, 2]. Here F(B) = F(C) = 2.
*/



