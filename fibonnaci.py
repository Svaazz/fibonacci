
x = 1
y = 1
z = 0


while z < 500:
	z = (x-z) + y
	x = z + y
	y = z
	print(z)
