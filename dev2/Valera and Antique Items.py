NUMBER_OR_SELLERS, VALERA_BUDGET = [int(x) for x in str(input()).split()]

result = {}
for i in range(NUMBER_OR_SELLERS):
    input_items = input().split()
    for x in input_items[1:]:
        if int(x) < VALERA_BUDGET:
            result[i + 1] = 1

print(len(result))
for i in result:
    print(i, end=" ")
