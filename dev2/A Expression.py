numbers = []

for i in range(3):
    numbers.append(int(input()))

a, b, c = [x for x in numbers]

print(str(max( a+b+c, a*b*c, a+b*c, a*b+c, (a+b)*c, a*(b+c))))