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

/*
Problem:
n question numbered from 1 to n.
For each question i:
    pi represent the points you earn for solving questions i.
    fi represent the frustration penalty: after solving question i, you cannot solve the next fi question


Solution:

understanding the problem.
let dp[i] represent the max point that can be obtained up to an including i.
The base case is simply dp[0]=0

For each question i, we have two options, 
- skip the question ie, the max points upt ot i is the same as the maximum point up to i-1
dp[i]=dp[i-1]
- Solve the question ie, if we solve the question, we earn pi points but we can't solve the next question fi, therefore, the max points 
up to i would be the points earned by solving question i, plus the maximum point up to the last question we are allowed to solved ie, i-fi-1
dp[i] = pi+dp[i-fi-1]
dp[n]


Pseudocode
function maxPoints(n, p[], f[]):
//initialize dp array to store maximum points
dp=[0]*(n+1)

//Iterate through each question
for i = 1 to n:
    //first option is to skip the current question
    dp[i] = dp[i-1]

    //second option is to solve the current question
    if i-f[i-1]-1>=0:
        dp[i]=max(dp[i], p[i-1]+dp[i-1]0-1) //this line ensures that we are not referencing out of bound is we solve early questions.  
    else:
        dp[i] = max(dp[i], p[i=1])
    //return dp[n]

    

*/