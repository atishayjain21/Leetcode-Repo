/*
Problem: Power Of Three
Level: Easy
Topics: Math, Recursion
Link to Problem: https://leetcode.com/problems/power-of-three/description/
*/

//Solution Function: 

bool isPowerOfThree(int n) {
        long int x;
        if(n<=0)
            return false;
        x=log10(n)/log10(3);
        if(int(pow(3,x))==n)
            return true;
        else
            return false;
}

//Using log10 instead of loge is the catch here as loge doesn't yield the right result for 3^5
