import sys

n = int(input())
nums = [int(input()) for x in range(n)]

_sum = 0
for x in nums:
	number = x//10
	power = x % 10
	_sum += number**power

print(_sum)