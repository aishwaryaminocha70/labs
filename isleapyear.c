def leap_year(year):
	return int(year) % 4 == 0 and (int(year) % 100 != 0 or int(year) % 400 == 0)

def rotate(s,n):
	sz=len(s)
	if sz>1:
		n = n % sz
		return s[sz-n:] + s[:sz-n]
	else:
		return "String Unchanged"
def digit_count(s):
	sval=str(int(s))
	print sval
	zero_count=0
	even_count=0
	odd_count=0
	for d in sval:
		if int(d)% 10 == 0:
			zero_count += 1
		elif int(d) % 2 == 0:
			even_count += 1
		elif int(d) % 2 != 0:
			odd_count += 1

	return (even_count, odd_count, zero_count)
