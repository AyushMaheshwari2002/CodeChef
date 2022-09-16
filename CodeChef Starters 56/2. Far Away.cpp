/*  Link :   https://www.codechef.com/submit/FARAWAY

    Chef has an array A of size N and an integer M, such that 1 ≤ Ai ≤ M for every 1 ≤ i ≤ N. The distance of an array B from array A is defined as:
    Chef wants an array B of size N, such that 1 ≤ Bi ≤ M and the value d(A,B) is as large as possible, i.e, the distance of B from A is maximum.
    Find the maximum distance for any valid array B.
    Note: |X| denotes the absolute value of an integer X. For example, |-4| = 4 and |7| = 7.
    
    Sample 1:
          Input :
                    4
                    2 6
                    3 5
                    4 1
                    1 1 1 1
                    5 7
                    2 3 4 5 6
                    7 24
                    23 7 6 16 12 4 24
          Output :
                    7
                    0
                    21
                    127
          Explanation:
                    Test case 1: The array having maximum distance from A is B = [6,1]. Thus the distance is |3-6|+|5-1| = 3+4 = 7.
                    Test case 2: The only array possible is B = [1,1,1,1]. The distance of this array from A is 0.
                    Test case 3: One of the possible arrays having maximum distance from A is B = [7,7,1,1,1]. Thus the distance 
                                 is |2-7|+|3-7|+|4-1|+|5-1|+|6-1| = 5+4+3+4+5 = 21.
*/



