import sys

for line in sys.stdin:
	if len(line) == 1:
		print("this one word")
	elif "goes" in line:
		print("animal sound")
	elif "fox" in line:
		pass