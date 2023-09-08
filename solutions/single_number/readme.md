Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]
Output: 1

Example 2:

Input: nums = [4,1,2,1,2]
Output: 4

Example 3:

Input: nums = [1]
Output: 1

### My own thoughts on solution

After submitting it and having it accepted, but being far below the average I thought a bit more.

It'd probably be faster to sort the values first, then check +1 in the list if it's a match.
If not value is unique, if it is we can jump current and next value and test the next.


So, having the array sorted [1, 1, 2, 2, 3, 4, 4].
We check index [0] = 1, [0+1] = 1, it's a match.
We jump to [2] = 2, [2+1] = 2, it's a match.
We jump to [4] = 3, [4+1] = 4, it's not a match, 3 is returned odd one out.