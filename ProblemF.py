
# author: Amir Hossein Khaksar

s = input().strip()
if s[0].islower() and (not s[1:] or s[1:].isupper()):
	print(s.capitalize())
elif s.isupper():
    print(s.lower())
else:
	print(s)