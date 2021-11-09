T = int(input())
sounds = []
test_cases = []

for i in range(T):
	_input = input()
	test_cases.append(_input)

while True:
	_input = input()
	if _input == "what does the fox say?":
		break
	animal, qsdqbds, sound = _input.split()
	sounds.append(sound)

for case in test_cases:
	fox_says = ""
	case = case.split()
	for sound in case:
		if not sound in sounds:
			fox_says += sound + " "
	print(fox_says.rstrip())