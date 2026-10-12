a = [3, 5, 6, 7, 8, 9, 2, 3, 8, 7]
item = int(input("Which data: "))
found = False

for i in range(0, len(a), 1):
    if a[i] == item:
        found = True
        pos = i
        break

if found == True:
    print("found at position:", pos + 1)
else:
    print("Not found")