n = int(input())

def days(n):
	printers = 1
	days = 0

	while printers < n:
		printers *= 2
		days += 1

	days += 1
	print(days)

days(n)