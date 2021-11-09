input_text = input()

translate = {
	"a": "@",
	"b": "8",
	"c": "(",
	"d": "|)",
	"e": "3",
	"f": "#",
	"g": "6",
	"h": "[-]",
	"i": "|",
	"j": "_|",
	"k": "|<",
	"l": "1",
	"m": "[]\/[]",
	"n": "[]\[]",
	"o": "0",
	"p": "|D",
	"q": "(,)",
	"r": "|Z",
	"s": "$",
	"t": "']['",
	"u": "|_|",
	"v": "\/",
	"w": "\/\/",
	"x": "}{",
	"y": "`/",
	"z": "2"
}

output_text = ""

for symbol in input_text:
	if symbol.lower() in translate:
		output_text += translate[symbol.lower()]
	else:
		output_text += symbol
print(output_text)