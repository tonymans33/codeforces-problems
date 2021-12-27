NUM_OF_STUDENTS = int(input())
students_skills = [int(x) for x in input().split()]

ones = []
twos = []
threes = []

for i in range(len(students_skills)):
    if students_skills[i] == 1: 
        ones.append(i + 1)
    elif students_skills[i] == 2: 
        twos.append(i + 1)
    elif students_skills[i] == 3: 
        threes.append(i + 1)


num_of_teams = min(len(ones), len(twos), len(threes))
print (num_of_teams)

for i in range(num_of_teams):
    print(ones[i] , "" , twos[i] , "" , threes[i])


