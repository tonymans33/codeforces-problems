NUM_OF_COORDINATES = int(input())
a = [0, 0, 0]

for i in range(NUM_OF_COORDINATES):
    b = [int(x) for x in input().split()]
    for j in range(3):
        a[j] += b[j]


print('YES' if sum(a) == 0 else 'NO')


