/*
psuedo code: 3 sum
1. Create list of list as result
2. Sort the input array
3. Loop through the array, assign first element to variable "a"
4. assign l = i + 1 and r = n - 1
5. while l < r, assign three_sum = a + nums[l] + nums[r]
6. if three_sum > 0: decrease r pointer
7. if three_sum < 0: increase l pointer
8. else res.append(a + nums[l] + nums[r]), l += 1
9. while nums[l] == nums[l + 1], l += 1
10.return res
*/