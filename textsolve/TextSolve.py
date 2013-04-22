if __name__ == '__main__':
	index = 1211
	temp  = "1121"
	input = open('p.txt','r')
	s = input.read()
	input.close()
	s = s[:index] + temp + s[index+4:]
	output = open('p.txt','w')
	output.write(s)
	output.close()

