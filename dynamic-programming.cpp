/*
Question: Given an unlimited supply of coins of given denomination S, and the task is to find the minimum number of coins required to achieve a given amount(change)

*/

/*
Solution: using dynamic programming (dp)

function coinChange (S,n):
    //create a dp array of size n+1 and initialize all values to a large number (infinity)
    dp = [infinity]*(n+1)

    //Base case, no coins are needed to make change for 0
    dp[0]=0

    //Loop through all amount from 1 to n
    for i=1 to n:
        //check for all coins in the set S
        for coin in S:
            if coin <= i:
            //update dp[i] if a better solution is found
            dp[i]=min(dp[i], dp[i-coin]+1)

    //if dp[n] is still infinity, no solution exists
    if dp[n]==infinity
    return -1

    //return the minimum number of coins for amount n
    return dp[n]
*/