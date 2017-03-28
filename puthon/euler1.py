x = 3
y = 5
hold = 0

for num in range(0, 1000):
    if num % x == 0 or num % y == 0:
        print num
        hold += num
        print hold