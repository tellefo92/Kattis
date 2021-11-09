C = int(input())
for i in range(C):
	data = [int(x) for x in input().split()]
	students = data[0]
	average_grade = sum(data[1:])/students
	above = sum(grade > average_grade for grade in data[1:])
	print("{:.3f}%".format(above/students*100))
