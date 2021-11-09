score = 0
solved = []
not_solved = {}
while True:
	data = input().split()
	if int(data[0]) == -1:
		break
	time, problem, answer = data
	if problem in solved:
		continue
	if answer == "wrong":
		if not problem in not_solved:
			not_solved[problem] = 1
		else:
			not_solved[problem] += 1
	else:
		if problem in not_solved:
			score += int(time) + 20*not_solved[problem]
		else:
			score += int(time)
		solved.append(problem)
print(len(solved), score)