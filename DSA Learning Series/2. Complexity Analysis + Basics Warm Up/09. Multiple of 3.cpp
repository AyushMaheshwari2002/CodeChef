/*  Link :    https://www.codechef.com/LRNDSA01/problems/MULTHREE

    Consider a very long K-digit number N with digits d0, d1, ..., dK-1 (in decimal notation; d0 is the most significant and dK-1 the least significant digit). This 
    number is so large that we can't give it to you on the input explicitly; instead, you are only given its starting digits and a way to construct the remainder of 
    the number.
    Specifically, you are given d0 and d1; for each i ≥ 2, di is the sum of all preceding (more significant) digits, modulo 10 — more formally, the following formula
    must hold: 
    Determine if N is a multiple of 3.

    Sample 1:
          Input
           T :  3
                5 3 4
                13 8 1
                760399384224 5 1
                
          Output
                NO
                YES
                YES
                
    Explanation:
            Example case 1: The whole number N is 34748, which is not divisible by 3, so the answer is NO.
            Example case 2: The whole number N is 8198624862486, which is divisible by 3, so the answer is YES.
*/




