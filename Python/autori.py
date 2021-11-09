string = input()
string = string.split("-")
new = ""
for word in string:
	new += word[0]
print(new)