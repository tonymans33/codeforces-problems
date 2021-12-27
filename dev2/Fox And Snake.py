rows, cols = [int(x) for x in input().split()]

a = '.' * (cols - 1)
b = '#'

for x in range(rows):
    if x % 2 == 0:
        print('#' * cols)
    else:
        print("{}{}".format(a,b))
        a, b = b, a

