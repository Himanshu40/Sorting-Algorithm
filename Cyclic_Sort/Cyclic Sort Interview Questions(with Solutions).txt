Question 1: Missing Number(Amazon)
LeetCode Link: https://leetcode.com/problems/missing-number/

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.


Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.


SOLUTION:


class Solution {
    public int missingNumber(int[] nums) {
        cyclic(nums);

        for(int i = 0 ; i<nums.length ; i++){
            if(nums[i] != i){
                return i ;
            }
        }

        return nums.length ;
    }

   public void cyclic(int[] arr){
        int i = 0 ;
        while (i < arr.length){
            int correct = arr[i] ;

            if (correct >= arr.length){
                i++ ;
            } else if(arr[i] != arr[correct]) {
                swap(arr, i, correct);
            } else {
                i++ ;
            }
        }
    }

    public void swap(int[] arr , int e1 , int e2){
        int temp = arr[e1];
        arr[e1] = arr[e2];
        arr[e2] = temp ;
    }
}
}


Question 2: Find All Numbers Disappeared in an Array (Google)
LeetCode Link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/


Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]


SOLUTION:


public List<Integer> findDisappearedNumbers(int[] nums) {
	for (var i = 0; i < nums.length; i++)
		while (nums[i] != nums[nums[i] - 1])
			swap(nums, i, nums[i] - 1);

	var disappeared = new ArrayList<Integer>();
	for (var i = 0; i < nums.length; i++)
		if (i != nums[i] - 1)
			disappeared.add(i + 1);
	return disappeared;
}

private void swap(int[] nums, int i, int j) {
	var temp = nums[i];
	nums[i] = nums[j];
	nums[j] = temp;
}





Question 3: Find the duplicate number (Amazon & Microsoft)
LeetCode Link: https://leetcode.com/problems/find-the-duplicate-number/


Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.



Input: nums = [1,3,4,2,2]
Output: 2





SOLUTION:


class Solution {
    public int findDuplicate(int[] nums) {
        int i = 0 ;

        while(i<nums.length){

            if(nums[i] != i+1){
                int correct = nums[i] - 1 ;

                if(nums[i] != nums[correct]){
                    swap(nums,i,correct);
                } else{
                    return nums[i] ;
                }
            } else{
                i++ ;
            }
        }

        return -1 ;
    }

    public void swap(int[] nums , int first , int secound){
        int temp = nums[first];
        nums[first] = nums[secound];
        nums[secound] = temp ;
    }
}




Question 4: First missing positive (Amazon)
LeetCode Link: https://leetcode.com/problems/first-missing-positive


Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.



Input: nums = [1,2,0]
Output: 3




SOLUTION:


class Solution {
    public int firstMissingPositive(int[] nums) {
        int i = 0;
        while( i < nums.length){
            if(nums[i] > 0 && nums[i] <= nums.length && nums[i] != nums[nums[i] - 1]){
                swap(nums,i,nums[i] - 1);
            }else{
                i++;
            }
        }
        for(i = 0;i<nums.length;i++){
            if(nums[i] != i + 1){
                return i + 1;
            }
        }
        return nums.length + 1;
    }

    private void swap(int[] nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}