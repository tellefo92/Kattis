import sys

_input = sys.argv[1]
valid_symbols = [x for x in "1234567890[@!#$£%^&*()<>?/\|}{~:]"]

whitespace = len([i for i in _input if i == "_"])
lowercase = len([i for i in _input if i.islower()])
uppercase = len([i for i in _input if i.isupper()])
symbols = len([i for i in _input if i in valid_symbols])

word_length = len(_input)
print(whitespace/word_length)
print(lowercase/word_length)
print(uppercase/word_length)
print(symbols/word_length)