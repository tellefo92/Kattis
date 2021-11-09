nums = [int(x) for x in input().split()]
nums.sort()
order = input()

if order[0] == "A":
	if order[1] == "B":
		print(nums[0],nums[1],nums[2])
	else:
		print(nums[0],nums[2],nums[1])
elif order[0] == "B":
	if order[1] == "A":
		print(nums[1],nums[0],nums[2])
	else:
		print(nums[1],nums[2],nums[0])
else:
	if order[1] == "A":
		print(nums[2],nums[0],nums[1])
	else:
		print(nums[2],nums[1],nums[0])