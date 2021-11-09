nums = input()
numss = [int(x) for x in nums.split()]
prod = 1
for x in numss:
	prod *= x

print(prod)