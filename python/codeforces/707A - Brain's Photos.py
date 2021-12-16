from sys import exit

n , m = map(int , input().split())

for x in range(0,n):
	for y in input().split():
		if y in 'CMY':
			print("#Color")
			exit()

print("#Black&White")
