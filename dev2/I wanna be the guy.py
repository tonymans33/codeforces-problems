NUMBER_OF_LEVELS = int(input())

levels = set()
for i in range(1, NUMBER_OF_LEVELS + 1):
    levels.add(i)

p = set(map(int, input().split()))
q = set(map(int, input().split()))

u = p | q

print(levels)
print(u)
if levels.issubset(u):
    print('I become the guy.')
else:
    print('Oh, my keyboard!')