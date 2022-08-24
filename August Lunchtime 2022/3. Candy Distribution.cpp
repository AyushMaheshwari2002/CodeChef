/*  Link :    https://www.codechef.com/submit/CANDYDIST

    Chef has N candies. He has to distribute them to exactly M of his friends such that each friend gets equal number of candies and each friend gets even number of
    candies. Determine whether it is possible to do so.
    NOTE: Chef will not take any candies himself and will distribute all the candies.
    
    Sample 1:
            Input:
                4
                9 3
                4 1
                4 2
                8 3
            Output:
                No
                Yes
                Yes
                No

  Explanation:
      Test case 1: Since Chef has 9 candies and 3 friends, each friend will get 9 / 3 = 3 candies. Since 3 is not even, Chef doesn't satisfy the conditions.
      Test case 2: Since Chef has 4 candies and 1 friend, each friend will get 4 / 1 = 4 candies. Since 4 is even, Chef satisfies all the conditions.
      Test case 3: Since Chef has 4 candies and 2 friends, each friend will get 4 / 2 = 2 candies. Since 2 is even, Chef satisfies all the conditions.
      Test case 4: Since Chef has 8 candies and 3 friends. Since Chef won't be able to distribute all the candies equally, Chef does not satisfy all the conditions.
*/



