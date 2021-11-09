h,w,n = [int(x) for x in input().split()]
bricks = [int(x) for x in input().split()]

brick_no = 0
for i in range(h):
	width = w
	while brick_no < n-1:
		brick = bricks[brick_no]
		if width - brick > 0:
			width -= brick
			brick_no += 1
		elif width - brick == 0:
			brick_no += 1
			break
		else:
			print("NO")
			exit()
print("YES")
