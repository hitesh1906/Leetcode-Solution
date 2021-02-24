/* Click or copy the link below to view question */
/* Do login into leetcode before opening the link below */
/*  https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/  */

// faster than 90% 

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          int x;
        if(nums.size() == 1){}    //base case
          
        else
        {
            if(k % nums.size()  == 0){}    //base case
            else
            {
                x = k % nums.size();
                std:: rotate(nums.begin(), nums.begin()+nums.size()-x, nums.end());   //a function to rotate vector 
            }
         }
    }
};