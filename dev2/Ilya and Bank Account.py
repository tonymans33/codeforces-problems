num = int(input())

if num > 0:
    print(num)
else:
    print(max(int(str(num)[:-1]), int(str(num)[:-2] + str(num)[(-2)+1:])))