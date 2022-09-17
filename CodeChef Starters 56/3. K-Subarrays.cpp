/*  Link :   https://www.codechef.com/submit/KSUB

    You are given an array A of N positive integers. Let G be the gcd of all the numbers in the array A.
    You have to find if there exist K non-empty, non-intersecting subarrays of A for which the arithmetic mean of the gcd of those K subarrays equals G.
    Formally, let g1, g2,..., gK be the gcd of those K chosen subarrays, then, (g1 + g2 + .... + gK) / K = G should follow.
    If there exist K such subarrays, output YES, otherwise output NO.
    Note: Two subarrays are non-intersecting if there exists no index i, such that, Ai is present in both the subarrays.
    
    Sample 1:
         Input :
                  4
                  6 4
                  2 2 3 3 2 2
                  1 1
                  1
                  5 3
                  1 2 3 4 5
                  4 3
                  6 12 18 24
        Output :
                  NO
                  YES
                  YES
                  NO
        Explanation:
                  Test case 1: It is impossible to find 4 non-empty, non-intersecting subarrays which satisfy the given condition.
                  Test case 2: There is only one element in the array. Here, G = 1 and, for the subarray [1], g = 1. Thus, it is possible to satisfy the conditions.
                  Test case 4: It is impossible to find 3 non-empty, non-intersecting subarrays which satisfy the given condition.
*/




